#include "EventAirplaneArrival.h"
#include <iostream>

EventAirplaneArrival::EventAirplaneArrival(std::string vAirplaneName, std::string vAirplaneAirline, int vPassengers) : Events(ARRIVAL)
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

EventType EventAirplaneArrival::getEventType() const
{
   return eventType;
}

std::string EventAirplaneArrival::eventReportTime()
{
   return std::string();
}
