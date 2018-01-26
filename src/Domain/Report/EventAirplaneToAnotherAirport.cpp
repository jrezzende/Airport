#include "EventAirplaneToAnotherAirport.h"
#include "RandomGen.h"
#include <iostream>

EventAirplaneToAnotherAirport::EventAirplaneToAnotherAirport(std::string vAirplaneName, std::string vAirplaneAirline) : Events(CRITICAL_SITUATION)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
   cout << eventDescription();
}

time_t EventAirplaneToAnotherAirport::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneToAnotherAirport::eventDescription()
{
   std::stringstream aux;

   const int airportNumber= RandomGen::generateRandom(1, 2);
   std::string destinationAirport;

   switch(airportNumber)
   {
   case 1: destinationAirport= "Aeroporto Internacional Salgado Filho"; break;
   case 2: destinationAirport= "Aeroporto Internacional Afonso Pena"; break;
   default: destinationAirport= "";
   }

   aux << airplaneName << " from the airline " << airplaneAirline << " was sent to " << destinationAirport << " due to capacity issues, at: " << Timer::getInstance()->getFormattedTime() << ".\n";

   return aux.str();

}

EventType EventAirplaneToAnotherAirport::getEventType() const
{
   return eventType;
}
