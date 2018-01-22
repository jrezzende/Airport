#include "EventAirplaneDepartureRequestExcess.h"

EventAirplaneDepartureRequestExcess::EventAirplaneDepartureRequestExcess() : Events(CRITICAL_SITUATION)
{
}

time_t EventAirplaneDepartureRequestExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneDepartureRequestExcess::eventDescription()
{
   std::stringstream aux;

   aux << "At: " << Timer::getInstance()->getFormattedTime() << " pending departure requests is higher than 5.\n";
 
   return aux.str();
}

EventType EventAirplaneDepartureRequestExcess::getEventType() const
{
   return eventType;
}
