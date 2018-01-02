#include "Airport.h"
#include "Directions.h"
#include "AirportRunway.h"

Airport::Airport()
{
   airportRunways[0] = new AirportRunway(Directions::SOUTH);
   airportRunways[1] = new AirportRunway(Directions::WEST);
   airportRunways[2] = new AirportRunway(Directions::SOUTHWEST);
}

Airport::~Airport()
{
}

Airport * Airport::getInstance()
{
   return s_instance;
}

bool Airport::airportAvailable()
{
   return false;
}
