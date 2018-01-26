#include "AirportRunway.h"

AirportRunway::AirportRunway(
   const Directions::Direction vRunwayDirection
) : runWayDirection(vRunwayDirection), availableByTime(true), availableByWind(true), willBeAvailableIn(0)
{
}

Directions::Direction AirportRunway::getRunwayDirection() const
{
   return runWayDirection;
}

void AirportRunway::changeWindState(const bool flag)
{
   availableByWind= flag;
}

void AirportRunway::changeTimeState(bool flag)
{
   availableByTime= flag;
}

bool AirportRunway::isRunwayAvailable() const
{
   return availableByWind && availableByTime;
}

unsigned long AirportRunway::remainingTime() const
{
   return willBeAvailableIn;
}
