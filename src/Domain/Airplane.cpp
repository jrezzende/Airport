#include "Airplane.h"

Airplane::Airplane() : passengers(0)
{
   generateRandomName();
}

Airplane::~Airplane()
{
}

int Airplane::getTotalPassengers()
{
   return passengers;
}

string Airplane::getName()
{
   return name;
}


void Airplane::generateRandomName()
{
   istringstream aux;
   fstream fs("C:\\Users\joao.mathias\source\repos\Airport\src\Domain\planes.txt");

   fs.seekg(ios::beg);
   getline(fs, name);

   fs.close();
}

