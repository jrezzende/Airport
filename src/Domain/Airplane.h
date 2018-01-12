#pragma once
#ifndef INCLUDED_AIRPLANE_H
#define INCLUDED_AIRPLANE_H

#include "RandomGen.h"

#include <string>

class Airplane
{
private:
   int passengers;
   std::string name;
   std::string airline;
   long arrivalTime;
   long departureTime;
   long landingTime;

public:
   Airplane(const unsigned long timeForArrival);
   ~Airplane() = default;

   void setTotalPassengers() { passengers= RandomGen::generateRandom(50, 150); }
   int getTotalPassengers() const { return passengers; }
   std::string getName() const { return name; }
   long getArrivalTime() const { return arrivalTime; }
   long getDepartureTime() const { return departureTime; }
   void setDepartureTime(const unsigned long timeForDeparture);
   long getLandingTime() const { return landingTime; }
   void setName(const std::string &newValue) { name= newValue; }
   void setAirline(int num);
   void generateRandomName();
};

#endif // !INCLUDED_AIRPLANE_H
