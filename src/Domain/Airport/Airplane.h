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

   void setTotalPassengers() { passengers= RandomGen::generateRandom(50, 150); }
   int getTotalPassengers() const { return passengers; }
   void setName(const std::string &newValue) { name= newValue; }
   std::string getName() const { return name; }
   void setAirline(int num);
   std::string getAirline() const { return airline; }
   long getArrivalTime() const { return arrivalTime; }
   void setArrivalTime(const unsigned long timeForArrival) { arrivalTime= timeForArrival; }
   long getDepartureTime() const { return departureTime; }
   void setDepartureTime(unsigned long timeForDeparture);
   void incrementArrival() { timeToArrive++; }
   
   void generateRandomName();
};

#endif // !INCLUDED_AIRPLANE_H
