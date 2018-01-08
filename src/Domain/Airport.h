#pragma once
#ifndef INCLUDED_AIRPORT_H
#define INCLUDED_AIRPORT_H

class AirportRunway;
class Airplane;
class Wind;

class Airport
{
private:
   static Airport* instance;
   AirportRunway* airportRunways[3];

   Airport();

   bool airportIsAvailable;

public:
   ~Airport();
   static Airport* getInstance();

   AirportRunway* getAvailableRunway();
   void enableRunwayWind(); // wind
   void enableRunwayTime(); // time

   bool airportAvailable();
};

#endif // !INCLUDED_AIRPORT_H
