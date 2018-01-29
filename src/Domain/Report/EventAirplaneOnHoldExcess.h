#pragma once
#ifndef INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H
#define INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H

#include "Events.h"

class EventAirplaneOnHoldExcess : public Events
{
   std::string reportTime;
public:
   EventAirplaneOnHoldExcess();
  ~EventAirplaneOnHoldExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string getReportTime() const { return reportTime; }
   std::string eventReportTime() override;
};

#endif //INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H