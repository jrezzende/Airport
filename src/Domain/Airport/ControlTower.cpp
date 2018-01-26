#include "ControlTower.h"
#include "Airplane.h"
#include "LogEvents.h"
#include "EventAirplaneCapacityExcess.h"
#include "AirportRunway.h"
#include "Model.h"
#include "AirplaneController.h"
#include "EventAirplaneToAnotherAirport.h"
#include "EventAirplaneArrival.h"
#include "EventAirplaneArrivalRequest.h"
#include "EventAirplaneOnHoldExcess.h"
#include "EventAirplaneDeparture.h"
#include "EventAirplaneDepartureRequestExcess.h"
#include "EventAirplaneDepartureRequest.h"

ControlTower::ControlTower(const int maxPlanesLimit) : planesOnGround(0), arrivalCounter(0), departureCounter(0)
{
   maxPlanesOnGround= maxPlanesLimit;
}

void ControlTower::newArrivalRequest(Airplane* airplane)
{
   arrivalRequests.push_back(airplane);
   auto* event= new EventAirplaneArrivalRequest(airplane->getName(), airplane->getAirline());
   LogEvents::getInstance()->newEvent(*event);
}

void ControlTower::newDepartureRequest(Airplane* airplane)
{
   departureRequests.push_back(airplane);
   auto* event= new EventAirplaneDepartureRequest(airplane->getName(), airplane->getAirline());
   LogEvents::getInstance()->newEvent(*event);
}

bool ControlTower::arrivalRequestSent(Airplane& airplane)
{
   for (unsigned int i= 0; i < arrivalRequests.size(); i++) {
      if (arrivalRequests.at(i) == &airplane)
         return true;
   }
   return false;
}

bool ControlTower::departureRequestSent(Airplane& airplane)
{
   for(unsigned int i= 0; i < departureRequests.size(); i++) {
      if (departureRequests.at(i) == &airplane)
         return true;
   }
   return false;
}

void ControlTower::requestTracker()
{
   flushArrival();
   flushDeparture();
}

void ControlTower::flushArrival()
{
   if (arrivalRequests.empty())
      return;

   if (planesOnGround >= maxPlanesOnGround * 0.7) {
      auto* event= new EventAirplaneCapacityExcess();
      LogEvents::getInstance()->newEvent(*event);
   }

   AirportRunway* runway;

   int count= 0;

   for (auto it : arrivalRequests) {

      runway= Model::getInstance()->getAirport().getAvailableRunway();

      if (Timer::getInstance()->getActualTime() - it->getArrivalTime() > 8) {
         Model::getInstance()->getAirplaneController().eraseAirplane(*it);

         auto* event= new EventAirplaneToAnotherAirport(it->getName(), it->getAirline());
         LogEvents::getInstance()->newEvent(*event);

         arrivalRequests.erase(arrivalRequests.begin() + count);
         count--;
      }


      else if (runway && planesOnGround < maxPlanesOnGround) {
         it->setDepartureTime(unsigned long(Timer::getInstance()->getActualTime()));
         it->setArrivalTime(0);

         auto* event= new EventAirplaneArrival(it->getName(), it->getAirline(), it->getTotalPassengers());
         LogEvents::getInstance()->newEvent(*event);

         arrivalRequests.erase(arrivalRequests.begin() + count);

         arrivalCounter+= it->getTotalPassengers();

         runway->runwayUnavailableTime(unsigned long(Timer::getInstance()->getActualTime()));

         planesOnGround++;
         arrivalCounter++;
      }


      if (arrivalRequests.size() >= 5) {
         auto* event= new EventAirplaneOnHoldExcess();
         LogEvents::getInstance()->newEvent(*event);
      }

      count++;
   }
}

void ControlTower::flushDeparture()
{
   if (departureRequests.empty())
      return;

   AirportRunway* runway;

   int count= 0;

   for(auto it : departureRequests) {
      runway= Model::getInstance()->getAirport().getAvailableRunway();

      if (!runway)
         return;

      if(it->getDepartureTime() <= unsigned long(Timer::getInstance()->getActualTime())) {
         Model::getInstance()->getAirplaneController().eraseAirplane(*it);

         auto* event= new EventAirplaneDeparture(it->getName(), it->getAirline(), it->getTotalPassengers());
         LogEvents::getInstance()->newEvent(*event);

         departureRequests.erase(departureRequests.begin() + count);

         departureCounter+= it->getTotalPassengers();

         runway->runwayUnavailableTime(unsigned long(Timer::getInstance()->getActualTime()));

         planesOnGround--;
         departureCounter++;
      }
      count++;
   }
   
   if(departureRequests.size() >= 5) {
      auto* event= new EventAirplaneDepartureRequestExcess();
      LogEvents::getInstance()->newEvent(*event);
   }

}
