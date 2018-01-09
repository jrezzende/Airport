#pragma once
#ifndef INCLUDED_AIRPORT_H
#define INCLUDED_AIRPORT_H

#include <string>

class AirportRunway;
class Airplane;
class Wind;

class Airport
{
private:
   static Airport* instance;
   AirportRunway* airportRunways[3];

   Airport();

   std::string airportName= "Aeroporto Internacional Hercílio Luz";
   bool airportIsAvailable;
   int maxAirplanesOnGround;

public:
   ~Airport();
   static Airport* getInstance();

   AirportRunway* getAvailableRunway();
   void enableRunwayWind(); 
   void enableRunwayTime(); 
   bool airportAvailable();
   int setMaxPlanesOnGround(int limit) { maxAirplanesOnGround= limit; }
};

#endif // !INCLUDED_AIRPORT_H
