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

void AirportRunway::changeRunwayState(bool flag)
{
   isAvailable= flag;
}

bool AirportRunway::isRunwayAvailable()
{
   return isAvailable;
}

int AirportRunway::remainingTime()
{
   return willBeAvailableIn;
}
