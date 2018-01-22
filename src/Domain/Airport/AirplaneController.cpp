#include "AirplaneController.h"
#include "Model.h"
#include "Timer.h"
#include "ControlTower.h"
#include "Airplane.h"
#include "LogEvents.h"
#include "EventAirplaneArrivalRequest.h"
#include "EventAirplaneDepartureRequest.h"

AirplaneController::AirplaneController() : addAirplane(0), totalArrivalOfPassengers(0), totalDepartureOfPassengers(0)
{
   addAirplane= unsigned long(Timer::getInstance()->getActualTime() + rand() % 4 + 1);
}

void AirplaneController::newAirplane()
{
   airplanes.push_back(new Airplane(unsigned long(Timer::getInstance()->getActualTime())));
   addAirplane= unsigned long(Timer::getInstance()->getActualTime() + rand() % 4 + 1);
}

void AirplaneController::arrivalRequest(Airplane& airplane)
{
   if (!Model::getInstance()->airport->getControlTower().arrivalRequestSent(airplane)) {
      airplane.setTotalPassengers();
      totalArrivalOfPassengers+= airplane.getTotalPassengers();

      Model::getInstance()->airport->getControlTower().newArrivalRequest(&airplane);

      auto* event= new EventAirplaneArrivalRequest(airplane.getName(), airplane.getAirline());
      LogEvents::getInstance()->newEvent(*event);
   }
}

void AirplaneController::departureRequest(Airplane& airplane)
{
   if (!Model::getInstance()->airport->getControlTower().departureRequestSent(airplane)) {
      airplane.setTotalPassengers();
      totalArrivalOfPassengers+= airplane.getTotalPassengers();

      Model::getInstance()->airport->getControlTower().newDepartureRequest(&airplane);

      auto* event= new EventAirplaneDepartureRequest(airplane.getName(), airplane.getAirline());
      LogEvents::getInstance()->newEvent(*event);
   }
}

void AirplaneController::requestTracker()
{
   if (addAirplane <= unsigned long(Timer::getInstance()->getActualTime()))
      newAirplane();

   for (auto* it : airplanes) {

      if(it->getArrivalTime() != 0) {
         if(it->getArrivalTime() <= unsigned long(Timer::getInstance()->getActualTime())) {
            totalPassengers(*it);
            arrivalRequest(*it);
         }
      }

      if (it->getDepartureTime() != 0) {
         if (it->getDepartureTime() <= unsigned long(Timer::getInstance()->getActualTime())) {
            totalPassengers(*it);
            departureRequest(*it);
         }
      }
   }
}

void AirplaneController::eraseAirplane(Airplane& airplane)
{
   for (unsigned int i= 0; i < airplanes.size(); i++) {
      if (airplanes.at(i) == &airplane)
         airplanes.erase(airplanes.begin() + i);
   }
}

void AirplaneController::totalPassengers(Airplane& airplane)
{
   airplane.setTotalPassengers();
}
