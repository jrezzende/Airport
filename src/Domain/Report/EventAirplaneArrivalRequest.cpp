#include "EventAirplaneArrivalRequest.h"

EventAirplaneArrivalRequest::EventAirplaneArrivalRequest(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline) : Events(eventTimeValue, ARRIVALREQUEST)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
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
