#pragma once
#ifndef INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H
#define INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H

#include "Events.h"

class EventAirplaneOnHoldExcess : public Events
{
public:
   EventAirplaneOnHoldExcess();
  ~EventAirplaneOnHoldExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
};

#endif //INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H