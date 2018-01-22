#include "AirportRunway.h"

AirportRunway::AirportRunway(
   const Directions::Direction vRunwayDirection
) : runWayDirection(vRunwayDirection), isAvailable(true), willBeAvailableIn(0)
{
}

Directions::Direction AirportRunway::getRunwayDirection() const
{
   return runWayDirection;
}

void AirportRunway::changeRunwayState(const bool flag)
{
   isAvailable= flag;
}

bool AirportRunway::isRunwayAvailable() const
{
   return isAvailable;
}

unsigned long AirportRunway::remainingTime() const
{
   return willBeAvailableIn;
}
