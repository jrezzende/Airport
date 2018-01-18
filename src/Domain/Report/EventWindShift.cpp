#include "EventWindShift.h"

EventWindShift::EventWindShift(time_t eventTimeValue, Directions::Direction newWindValue) : Events(eventTimeValue)
{
   newDir= newWindValue;
}

time_t EventWindShift::getEventTime()
{
   return eventTime;
}

std::string EventWindShift::eventDescription()
{
   std::stringstream aux;

   aux << "Wind direction changed to " << Directions::toString(newDir);

   return aux.str();
}