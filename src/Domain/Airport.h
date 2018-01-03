#pragma once
#ifndef INCLUDED_AIRPORT_H
#define INCLUDED_AIRPORT_H

class AirportRunway;
class Airplane;

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

   bool airportAvailable();
};

#endif // !INCLUDED_AIRPORT_H
