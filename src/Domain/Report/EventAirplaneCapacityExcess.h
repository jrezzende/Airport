#pragma once
#ifndef INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H
#define INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H

#include "Events.h"

class EventAirplaneCapacityExcess : public Events
{
   std::string reportTime;
public:
   EventAirplaneCapacityExcess();
  ~EventAirplaneCapacityExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string getReportTime() const { return reportTime; }
   std::string eventReportTime() override;
};

#endif //INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H