#include "EventAirplaneDepartureRequest.h"

EventAirplaneDepartureRequest::EventAirplaneDepartureRequest(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline) : Events(eventTimeValue, DEPARTURE_REQUEST)
{
   airplaneName= vAirplaneName;
   airplaneAirline= vAirplaneAirline;
}

time_t EventAirplaneDepartureRequest::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneDepartureRequest::eventDescription()
{
   std::stringstream aux;

   aux << airplaneName << " from the airline " << airplaneAirline << " is requesting a runway to depart.\n";

   return aux.str();
}

EventType EventAirplaneDepartureRequest::getEventType() const
{
   return eventType;
}
