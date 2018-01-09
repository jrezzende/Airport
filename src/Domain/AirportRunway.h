#pragma once
#ifndef INCLUDED_AIRPORTRUNWAY_H
#define INCLUDED_AIRPORTRUNWAY_H

#include "Directions.h"
#include <string>

using namespace std;

class AirportRunway
{
private:
   const Directions::Direction runWayDirection;
   bool isAvailable;
   int willBeAvailableIn;

public:
   AirportRunway(const Directions::Direction vRunwayDirection);
   ~AirportRunway();

   Directions::Direction getRunwayDirection();
   void changeRunwayState(bool flag);
   bool isRunwayAvailable();
   int remainingTime();
};

#endif // !INCLUDED_AIRPORTRUNWAY_H
