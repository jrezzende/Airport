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

   std::string airportName= "Aeroporto Internacional Hercilio Luz";
   bool airportIsAvailable;

public:
   ~Airport();
   static Airport* getInstance();
   ControlTower& getControlTower() const { return *controlTower; }

   const std::string& getAirportName() const { return airportName; }
   AirportRunway* getAvailableRunway();
   void enableRunwayWind(); 
   void enableRunwayTime(); 
   void requestTracker();

   bool airportAvailable() const;
};

#endif // !INCLUDED_AIRPORT_H
