#pragma once
#ifndef INCLUDED_AIRPORT_H
#define INCLUDED_AIRPORT_H

class AirportRunway;
class Airplane;

class Airport
{
private:
   static Airport* s_instance;
   AirportRunway* airportRunways[3];

   Airport();

public:
   ~Airport();
   static Airport* getInstance();

   bool airportAvailable();
};

#endif // !INCLUDED_AIRPORT_H
