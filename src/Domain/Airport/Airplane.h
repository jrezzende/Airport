#pragma once
#ifndef INCLUDED_AIRPLANE_H
#define INCLUDED_AIRPLANE_H

#include "RandomGen.h"

#include <string>

class Airplane
{
   std::string name;
   std::string airline;
   int passengers;
   long arrivalTime;
   long departureTime;
   long landingTime;

public:
   Airplane(const unsigned long timeForArrival);
   ~Airplane() = default;

   void setTotalPassengers() { passengers= RandomGen::generateRandom(50, 150); }
   int getTotalPassengers() const { return passengers; }
   void setName(const std::string &newValue) { name= newValue; }
   std::string getName() const { return name; }
   void setAirline(int num);
   std::string getAirline() const { return airline; }
   long getArrivalTime() const { return arrivalTime; }
   long getDepartureTime() const { return departureTime; }
   void setDepartureTime(const unsigned long timeForDeparture);
   long getLandingTime() const { return landingTime; }
   
   void generateRandomName();
};

#endif // !INCLUDED_AIRPLANE_H
