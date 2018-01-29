#include "Airplane.h"
#include "Timer.h"
#include <iostream>
#include <fstream>

Airplane::Airplane(const unsigned long timeToArrive) : passengers(), name(""), airline(""), departureTime(0), timeToArrive(0)
{
   generateRandomName();
   setTotalPassengers();
   arrivalTime=  timeToArrive + rand() % 4 + 1;
}

void Airplane::setDepartureTime(const unsigned long timeForDeparture)
{
   departureTime= timeForDeparture + rand() % 10 + 5;
}

void Airplane::setAirline(int const num)
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
   default:
      airline= "undefined"; break;
   }
}

void Airplane::generateRandomName()
{
   std::ifstream in("C:/Users/joao.mathias/source/repos/Airport/src/Domain/Airport/planes.txt");
   std::string airplane;

   auto airlineCounter= 0;
   const auto airplaneCounter = RandomGen::generateRandom(1, 38);
  
   for (auto i= 0; i <= airplaneCounter; i++) {
      getline(in, airplane);
       if (airplane == "-") {
         getline(in, airplane);
         airlineCounter++;
      }
   }

   setName(airplane);
   setAirline(airlineCounter);
}

