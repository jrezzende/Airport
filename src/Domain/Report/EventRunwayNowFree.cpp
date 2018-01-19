#include "EventRunwayNowFree.h"

EventRunwayNowFree::EventRunwayNowFree(time_t eventTimeValue, Directions::Direction newFreeRunway) : Events(eventTimeValue, RUNWAY_NOW_FREE)
{
   runwayFree= newFreeRunway;
}

time_t EventRunwayNowFree::getEventTime()
{
   return eventTime;
}

std::string EventRunwayNowFree::eventDescription()
{
   std::stringstream aux;

   aux << "Runway " << Directions::toString(runwayFree) << " is now available again.\n";

   return aux.str();
}

EventType EventRunwayNowFree::getEventType() const
{
   return eventType;
}
