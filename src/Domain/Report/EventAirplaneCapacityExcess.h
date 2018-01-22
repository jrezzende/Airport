#pragma once
#ifndef INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H
#define INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H

#include "Events.h"

class EventAirplaneCapacityExcess : public Events
{
public:
   EventAirplaneCapacityExcess();
  ~EventAirplaneCapacityExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
};

#endif //INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H