#include "Airplane.h"

Airplane::Airplane()
{
   generateRandomName();
   setTotalPassengers();
}

Airplane::~Airplane()
{
}

void Airplane::setAirline(int num)
{
   switch (num) 
   {
   case 0:
      airline= "Azul Trip"; break;
   case 1:
      airline= "NHT"; break;
   case 2:
      airline= "Avianca"; break;
   case 3:
      airline= "Passaredo"; break;
   case 4:
      airline= "Puma"; break;
   case 5:
      airline= "TAM"; break;
   case 6:
      airline= "TOTAL"; break;
   case 7:
      airline= "Gol/VARIG"; break;
   case 8:
      airline= "WEBJET"; break;
   }
}

void Airplane::generateRandomName()
{
   std::ifstream in("C:/Users/joao.mathias/source/repos/Airport/src/Domain/planes.txt");
   
   int manufacturerCounter= 0;
   int limit= RandomGen::generateRandom(1, 38);
   std::string s;

   for (int i= 0; i <= limit; i++) {
      getline(in, s);
      if (s == "-") {
         i++;
         getline(in, s);
         manufacturerCounter++;
      }
   }

   setAirline(manufacturerCounter);
   setName(s);
}

