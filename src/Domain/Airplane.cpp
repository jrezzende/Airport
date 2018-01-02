#include "Airplane.h"

Airplane::Airplane()
{
   generateRandomName();
   setTotalPassengers();
}

Airplane::~Airplane()
{
}

int Airplane::generateRandomNum(int outset, int end)
{
   random_device rd;
   mt19937 eng(rd());
   uniform_int_distribution<> distr(outset, end);

   return distr(eng);
}

void Airplane::generateRandomName()
{
   ifstream in("C:/Users/joao.mathias/source/repos/Airport/src/Domain/planes.txt");
   
   int limit= generateRandomNum(1, 38);
   string s;

   for (int i= 0; i <= limit; i++ ) 
      getline(in, s);

   getline(in, s);

   setName(s);
}

