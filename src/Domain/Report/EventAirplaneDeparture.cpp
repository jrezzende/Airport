#include "EventAirplaneDeparture.h"
#include <iostream>

EventAirplaneDeparture::EventAirplaneDeparture(std::string vAirplaneName, std::string vAirplaneAirline, int vPassengers) : Events(DEPARTURE)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
   numberOfPassengers= vPassengers;
   //cout << eventDescription();
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

EventType EventAirplaneDeparture::getEventType() const
{
   return eventType;
}

std::string EventAirplaneDeparture::eventReportTime()
{
   return std::string();
}
