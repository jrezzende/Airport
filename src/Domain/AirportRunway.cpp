#include "AirportRunway.h"

AirportRunway::AirportRunway(const Directions::Direction vRunwayDirection) : runWayDirection(vRunwayDirection), isAvailable(true)
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
}

bool AirportRunway::isRunwayFree()
{
   return isAvailable;
}

int AirportRunway::remainingTimeToUse()
{
   return willBeAvailableIn;
}
