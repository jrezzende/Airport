#include "EventAirplaneArrivalRequest.h"
#include <iostream>

EventAirplaneArrivalRequest::EventAirplaneArrivalRequest(std::string vAirplaneName, std::string vAirplaneAirline) : Events(ARRIVALREQUEST)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
   std::cout << eventDescription();
}

time_t EventAirplaneArrivalRequest::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneArrivalRequest::eventDescription()
{
   std::stringstream aux;
   aux << airplaneName << " from the airline " << airplaneAirline << " is requesting a runway to arrive.\n";

   return aux.str();
}

EventType EventAirplaneArrivalRequest::getEventType() const
{
   return eventType;
}
