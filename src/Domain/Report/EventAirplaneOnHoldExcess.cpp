#include "EventAirplaneOnHoldExcess.h"

EventAirplaneOnHoldExcess::EventAirplaneOnHoldExcess(time_t eventTimeValue) : Events(eventTimeValue)
{
}

time_t EventAirplaneOnHoldExcess::getEventTime()
{
   return eventTime;
}

std::string EventAirplaneOnHoldExcess::eventDescription()
{
   std::stringstream aux;

   aux << "Number of airplanes on hold is currently higher than 5.\n";

   return aux.str();
}
