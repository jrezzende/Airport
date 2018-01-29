#include "EventAirplaneCapacityExcess.h"
#include <iostream>

EventAirplaneCapacityExcess::EventAirplaneCapacityExcess() : Events(CRITICAL_SITUATION)
{
   reportTime= Timer::getInstance()->getFormattedTime();
}

time_t EventAirplaneCapacityExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneCapacityExcess::eventDescription()
{
   std::stringstream aux;

   aux << "At: " << Timer::getInstance()->getFormattedTime() << " the current number of planes on ground is higher than 70% of its total capacity.\n\n";

   return aux.str();
}

EventType EventAirplaneCapacityExcess::getEventType() const
{
   return eventType;
}

std::string EventAirplaneCapacityExcess::eventReportTime()
{
   std::stringstream aux;

   aux << "At: " << getReportTime() << " the current number of planes on ground is higher than 70% of its total capacity.\n\n";

   return aux.str();
}
