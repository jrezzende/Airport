#include "EventAirplaneDeparture.h"

EventAirplaneDeparture::EventAirplaneDeparture(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline, int vPassengers) : Events(eventTimeValue)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
   numberOfPassengers= vPassengers;
}

time_t EventAirplaneDeparture::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneDeparture::eventDescription()
{
   std::stringstream aux;

   aux << airplaneName << " from the airline " << airplaneAirline << " has departed from the airport carrying " << numberOfPassengers << " passengers.\n";

   return aux.str();
}
