#include "EventAirplaneArrival.h"

EventAirplaneArrival::EventAirplaneArrival(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline, int vPassengers) : Events(eventTimeValue)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
   numberOfPassengers= vPassengers;
}

time_t EventAirplaneArrival::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneArrival::eventDescription()
{
   std::stringstream aux;

   aux << airplaneName << " from the airline " << airplaneAirline << " has arrived at the airport carrying " << numberOfPassengers << " passengers.\n";

   return aux.str();
}
