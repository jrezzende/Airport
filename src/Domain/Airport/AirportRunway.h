#pragma once
#ifndef INCLUDED_AIRPORTRUNWAY_H
#define INCLUDED_AIRPORTRUNWAY_H

#include "Directions.h"
#include <string>

using namespace std;

class AirportRunway
{
   const Directions::Direction runWayDirection;
   bool isAvailable;
   unsigned long willBeAvailableIn;

public:
   AirportRunway(const Directions::Direction vRunwayDirection);
   ~AirportRunway() = default;

   Directions::Direction getRunwayDirection() const;
   void changeRunwayState(bool flag);
   bool isRunwayAvailable() const;
   unsigned long remainingTime() const;
   void runwayUnavailableTime(const unsigned long time) { isAvailable= false; willBeAvailableIn= time + 3; }
};

#endif // !INCLUDED_AIRPORTRUNWAY_H
