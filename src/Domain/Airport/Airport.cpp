#include "Airport.h"
#include "Directions.h"
#include "AirportRunway.h"
#include "WindController.h"
#include "Model.h"
#include "Timer.h"
#include "ControlTower.h"
#include <iostream>

Airport* Airport::instance= nullptr;

Airport* Airport::getInstance()
{
   if (!instance)
      instance= new Airport();

   return instance;
}

////////////////////////////////

Airport::Airport()
{
   airportRunways[0] = new AirportRunway(Directions::NORTH_SOUTH);
   airportRunways[1] = new AirportRunway(Directions::EAST_WEST);
   airportRunways[2] = new AirportRunway(Directions::NORTHEAST_SOUTHWEST);

   airportIsAvailable = false;
}

Airport::~Airport()
{
   for (auto& airportRunway : airportRunways)
      delete airportRunway;
}

bool Airport::airportAvailable() const
{
   return airportIsAvailable;
}

AirportRunway* Airport::getAvailableRunway()
{
   enableRunwayWind();
   enableRunwayTime();

   for (auto& airportRunway : airportRunways) {
      if (airportRunway->isRunwayAvailable()) {
         airportIsAvailable= true;
         return airportRunway;
      }
   }
   airportIsAvailable= false;
   return nullptr;
}

void Airport::enableRunwayWind()
{
   Wind* wind= Model::getInstance()->getWindController().getCurrent();

   if (wind->getWindDirection() != Directions::NORTH_SOUTH && wind->getWindDirection() != Directions::SOUTH_NORTH)
      airportRunways[0]->changeWindState(false);
   else
      airportRunways[0]->changeWindState(true);

   if (wind->getWindDirection() != Directions::EAST_WEST && wind->getWindDirection() != Directions::WEST_EAST)
      airportRunways[1]->changeWindState(false);
   else
      airportRunways[1]->changeWindState(true);

   if (wind->getWindDirection() != Directions::NORTHEAST_SOUTHWEST && wind->getWindDirection() != Directions::SOUTHWEST_NORTHEAST)
      airportRunways[2]->changeWindState(false);
   else
      airportRunways[2]->changeWindState(true);
}

void Airport::enableRunwayTime()
{
   for (auto& airportRunway : airportRunways) {
      if (Timer::getInstance()->getActualTime() >= airportRunway->remainingTime())
         airportRunway->changeTimeState(true);
      else
         airportRunway->changeTimeState(false);
   }
}

void Airport::requestTracker()
{
   enableRunwayTime();
   enableRunwayWind();

   controlTower->requestTracker();
}

void Airport::setAirportCapacity(int capacity)
{
   controlTower= new ControlTower(capacity);

   airportIsAvailable= true;
}
