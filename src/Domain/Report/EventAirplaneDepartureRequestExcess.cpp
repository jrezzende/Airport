#include "EventAirplaneDepartureRequestExcess.h"

EventAirplaneDepartureRequestExcess::EventAirplaneDepartureRequestExcess(time_t eventTimeValue) : Events(eventTimeValue, CRITICAL_SITUATION)
{
}

time_t EventAirplaneDepartureRequestExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneDepartureRequestExcess::eventDescription()
{
   std::stringstream aux;

   aux << "Pending departure requests is higher than 5.\n";

   return aux.str();
}

EventType EventAirplaneDepartureRequestExcess::getEventType() const
{
   return eventType;
}
