#include "EventWindShift.h"
#include "Timer.h"

EventWindShift::EventWindShift(Directions::Direction newWindValue) : Events(WIND_SHIFT)
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

   aux << "Wind direction changed to " << Directions::toString(newDir) << " at : " << Timer::getInstance()->getFormattedTime() << ".\n";

   return aux.str();
}

EventType EventWindShift::getEventType() const
{
   return eventType;
}
