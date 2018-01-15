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
   int willBeAvailableIn;

public:
   AirportRunway(const Directions::Direction vRunwayDirection);
   ~AirportRunway() = default;

   Directions::Direction getRunwayDirection() const;
   void changeRunwayState(bool flag);
   bool isRunwayAvailable() const;
   int remainingTime() const;
};

#endif // !INCLUDED_AIRPORTRUNWAY_H
