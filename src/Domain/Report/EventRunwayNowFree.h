#pragma once
#ifndef INCLUDED_EVENTRUNWAYNOWFREE_H
#define INCLUDED_EVENTRUNWAYNOWFREE_H

#include "Events.h"
#include "Directions.h"

class EventRunwayNowFree : public Events
{
   Directions::Direction runwayFree;
public:
   EventRunwayNowFree(time_t eventTimeValue, Directions::Direction newFreeRunway);
  ~EventRunwayNowFree() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
};

#endif //INCLUDED_EVENTRUNWAYNOWFREE_H
