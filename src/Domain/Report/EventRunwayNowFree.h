#pragma once
#ifndef INCLUDED_EVENTRUNWAYNOWFREE_H
#define INCLUDED_EVENTRUNWAYNOWFREE_H

#include "Events.h"
#include "Directions.h"

class EventRunwayNowFree : public Events
{
   Directions::Direction runwayFree;
public:
   EventRunwayNowFree(Directions::Direction newFreeRunway);
  ~EventRunwayNowFree() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string eventReportTime() override;
};

#endif //INCLUDED_EVENTRUNWAYNOWFREE_H
