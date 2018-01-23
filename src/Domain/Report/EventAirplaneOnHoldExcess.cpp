#include "EventAirplaneOnHoldExcess.h"
#include <iostream>

EventAirplaneOnHoldExcess::EventAirplaneOnHoldExcess() : Events(CRITICAL_SITUATION)
{
   std::cout << eventDescription();
}

time_t EventAirplaneOnHoldExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneOnHoldExcess::eventDescription()
{
   std::stringstream aux;

   aux << "At: " << Timer::getInstance()->getFormattedTime() << " the number of airplanes on hold is higher than 5.\n";

   return aux.str();
}

EventType EventAirplaneOnHoldExcess::getEventType() const
{
   return eventType;
}
