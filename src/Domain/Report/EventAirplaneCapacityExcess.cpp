#include "EventAirplaneCapacityExcess.h"

EventAirplaneCapacityExcess::EventAirplaneCapacityExcess(time_t eventTimeValue) : Events(eventTimeValue, CRITICAL_SITUATION)
{
}

time_t EventAirplaneCapacityExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneCapacityExcess::eventDescription()
{
   std::stringstream aux;

   aux << "Current number of planes on ground is higher than 70% of its total capacity.\n";

   return aux.str();
}

EventType EventAirplaneCapacityExcess::getEventType() const
{
   return eventType;
}
