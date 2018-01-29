#include "EventAirplaneOnHoldExcess.h"
#include <iostream>

EventAirplaneOnHoldExcess::EventAirplaneOnHoldExcess() : Events(CRITICAL_SITUATION)
{
   reportTime= Timer::getInstance()->getFormattedTime();
}

time_t EventAirplaneOnHoldExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneOnHoldExcess::eventDescription()
{
   std::stringstream aux;

   aux << "At: " << Timer::getInstance()->getFormattedTime() << " the number of airplanes on hold is higher than 5.\n\n";

   return aux.str();
}

EventType EventAirplaneOnHoldExcess::getEventType() const
{
   return eventType;
}

std::string EventAirplaneOnHoldExcess::eventReportTime()
{
   std::stringstream aux;

   aux << "At: " << getReportTime() << " the number of airplanes on hold is higher than 5.\n\n";

   return aux.str();
}
