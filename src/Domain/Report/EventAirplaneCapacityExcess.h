#pragma once
#ifndef INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H
#define INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H

#include "Events.h"

class EventAirplaneCapacityExcess : public Events
{
   EventAirplaneCapacityExcess(time_t eventTimeValue);
  ~EventAirplaneCapacityExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
};

#endif //INCLUDED_EVENTAIRPLANECAPACITYEXCESS_H