#include "AirportRunway.h"

AirportRunway::AirportRunway(const Directions::Direction vRunwayDirection) : runWayDirection(vRunwayDirection), isAvailable(true), willBeAvailableIn(0)
{
}

AirportRunway::~AirportRunway()
{
}

Directions::Direction AirportRunway::getRunwayDirection()
{
   return runWayDirection;
}

bool AirportRunway::changeRunwayState(bool flag)
{
   isAvailable= flag;

   return isAvailable;
}

bool AirportRunway::isRunwayFree()
{
   return isAvailable;
}

int AirportRunway::remainingTime()
{
   return willBeAvailableIn;
}
