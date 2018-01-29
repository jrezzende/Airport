#pragma once
#ifndef INCLUDED_EVENTWINDSHIFT_H
#define INCLUDED_EVENTWINDSHIFT_H

#include "Events.h"
#include "Directions.h"

class EventWindShift : public Events
{
   Directions::Direction newDir;
   std::string reportTime;
public:
   EventWindShift(Directions::Direction newWindValue);
   ~EventWindShift() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string eventReportTime() override;
   std::string getReportTime() const { return reportTime; }
};

#endif //INCLUDED_EVENTWINDSHIFT_H
