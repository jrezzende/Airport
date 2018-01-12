#pragma once
#ifndef INCLUDED_AIRPORT_H
#define INCLUDED_AIRPORT_H

#include "ControlTower.h"

#include <string>

class AirportRunway;
class Airplane;
class Wind;

class Airport
{
private:
   static Airport* instance;
   AirportRunway* airportRunways[3];
   ControlTower* controlTower;

   Airport();

   std::string airportName= "Aeroporto Internacional Hercílio Luz";
   bool airportIsAvailable;

public:
   ~Airport();
   static Airport* getInstance();
   ControlTower* getControlTower() const { return controlTower; }

   AirportRunway* getAvailableRunway();
   void enableRunwayWind(); 
   void enableRunwayTime(); 
   bool airportAvailable() const;
};

#endif // !INCLUDED_AIRPORT_H
