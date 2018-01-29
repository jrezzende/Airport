#include "EventAirplaneDepartureRequestExcess.h"
#include <iostream>

EventAirplaneDepartureRequestExcess::EventAirplaneDepartureRequestExcess() : Events(CRITICAL_SITUATION)
{
   reportTime= Timer::getInstance()->getFormattedTime();
}

time_t EventAirplaneDepartureRequestExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneDepartureRequestExcess::eventDescription()
{
   std::stringstream aux;

   aux << "At: " << Timer::getInstance()->getFormattedTime() << " pending departure requests is higher than 5.\n\n";
 
   return aux.str();
}

EventType EventAirplaneDepartureRequestExcess::getEventType() const
{
   return eventType;
}

std::string EventAirplaneDepartureRequestExcess::eventReportTime()
{
   std::stringstream aux;

   aux << "At: " << getReportTime() << " pending departure requests is higher than 5.\n\n";

   return aux.str();
}
