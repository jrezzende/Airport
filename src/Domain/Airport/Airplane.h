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
   long timeToArrive;

public:
   Airplane(const unsigned long timeForArrival);
   ~Airplane() = default;

   void generateRandomName();
   void setName(const std::string &newValue) { name= newValue; }
   void setAirline(int num);
   void setTotalPassengers() { passengers= RandomGen::generateRandom(50, 150); }
   void setArrivalTime(const unsigned long timeForArrival) { arrivalTime= timeForArrival; }
   void setDepartureTime(unsigned long timeForDeparture);

   std::string getName() const { return name; }
   int getTotalPassengers() const { return passengers; }
   std::string getAirline() const { return airline; }
   long getArrivalTime() const { return arrivalTime; }
   long getDepartureTime() const { return departureTime; }
   
};

#endif // !INCLUDED_AIRPLANE_H
