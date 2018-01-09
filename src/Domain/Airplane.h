#pragma once
#ifndef INCLUDED_AIRPLANE_H
#define INCLUDED_AIRPLANE_H

#include "RandomGen.h"

#include <string>
#include <iostream>
#include <fstream>

class Airplane
{
private:
   int passengers;
   std::string name;
   std::string airline;

   Airplane(const Airplane& rhs);
   Airplane& operator= (const Airplane& rhs);

public:
   Airplane();
   ~Airplane();

   void setTotalPassengers() { passengers= RandomGen::generateRandom(50, 150); }
   int getTotalPassengers() { return passengers; }
   std::string getName() { return name; }
   void setName(std::string newValue) { name= newValue; }
   void setAirline(int num);
   void generateRandomName();
};

#endif // !INCLUDED_AIRPLANE_H
