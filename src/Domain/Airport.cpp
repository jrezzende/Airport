#include "Airport.h"
#include "Directions.h"
#include "AirportRunway.h"
#include "WindController.h"
#include "Timer.h"

Airport * Airport::instance= nullptr;

Airport * Airport::getInstance()
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

   airportIsAvailable= true;
}

Airport::~Airport()
{
   for (int i= 0; i < 3; i++) {
      delete airportRunways[i];
   }
}

bool Airport::airportAvailable()
{
   return airportIsAvailable;
}

AirportRunway * Airport::getAvailableRunway()
{
   enableRunwayWind();
   enableRunwayTime();

   for (int i= 0; i < 3; i++) {
      if (airportRunways[i]->isRunwayAvailable()) {
         airportIsAvailable= true;
         return airportRunways[i];
      }
   }
   airportIsAvailable= false;
   return nullptr;
}

WindController wcontrol; // must be changed later, when model is created *TEST PURPOSES ONLY*

void Airport::enableRunwayWind() // if the winds are transversal
{
   Wind* wind= wcontrol.getCurrent();

   if (wind->getWindDirection() != Directions::NORTH_SOUTH && wind->getWindDirection() != Directions::SOUTH_NORTH)
      airportRunways[0]->changeRunwayState(false);
   else
      airportRunways[0]->changeRunwayState(true);

   if (wind->getWindDirection() != Directions::EAST_WEST && wind->getWindDirection() != Directions::WEST_EAST)
      airportRunways[1]->changeRunwayState(false);
   else
      airportRunways[1]->changeRunwayState(true);

   if (wind->getWindDirection() != Directions::NORTHEAST_SOUTHWEST && wind->getWindDirection() != Directions::SOUTHWEST_NORTHEAST)
      airportRunways[2]->changeRunwayState(false);
   else
      airportRunways[2]->changeRunwayState(true);
}

void Airport::enableRunwayTime() // remaining time that the runway is blocked
{
   for (int i = 0; i < 3; i++) {
      if (!Timer::getInstance()->getActualTime() >= airportRunways[i]->remainingTime())
         airportRunways[i]->changeRunwayState(false);
      else
         airportRunways[i]->changeRunwayState(true);
   }
}


