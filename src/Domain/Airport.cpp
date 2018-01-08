#include "Airport.h"
#include "Directions.h"
#include "AirportRunway.h"
#include "WindGenerator.h"

Airport * Airport::instance= nullptr;

Airport * Airport::getInstance()
{
   if (!instance)
      instance= new Airport();

   return instance;
}

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
   return nullptr;
}

WindGenerator gen; // must be changed later, when the a model is created *TEST PURPOSES ONLY*

void Airport::enableRunwayWind()
{
   Wind* wind= gen.getCurrent();

   if(wind->getWindDirection() != Directions::NORTHEAST_SOUTHWEST && wind->getWindDirection()) {}
}

void Airport::enableRunwayTime()
{
}


