#pragma once
#ifndef INCLUDED_AIRPORT_H
#define INCLUDED_AIRPORT_H

#include <string>

class ControlTower;
class AirportRunway;
class Airplane;
class Wind;

class Airport
{
   static Airport* instance;
   AirportRunway* airportRunways[3];
   ControlTower* controlTower;

   Airport();

   std::string airportName;
   bool airportIsAvailable;

public:
   ~Airport();
   static Airport* getInstance();
   ControlTower& getControlTower() const { return *controlTower; }

   const std::string& getAirportName() const { return airportName; }
   void setAirportCapacity(int capacity);
   AirportRunway* getAvailableRunway();
   bool airportAvailable() const;

   void enableRunwayWind();
   void enableRunwayTime();

   void requestTracker();
};

#endif // !INCLUDED_AIRPORT_H
