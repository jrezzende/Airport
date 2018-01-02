#pragma once
#ifndef INCLUDED_AIRPLANE_H
#define INCLUDED_AIRPLANE_H

#include <string>
#include <random>
#include <iostream>
#include <fstream>

using namespace std;

class Airplane
{
private:
   int passengers;
   string name;

   Airplane(const Airplane& rhs);
   Airplane& operator= (const Airplane& rhs);

public:
   Airplane();
   ~Airplane();

   void setTotalPassengers() { passengers= generateRandomNum(50, 150); }
   int getTotalPassengers() { return passengers; }
   string getName() { return name; }
   void setName(string newValue) { name= newValue; }
   int generateRandomNum(int outset, int end);
   void generateRandomName();
};

#endif // !INCLUDED_AIRPLANE_H
