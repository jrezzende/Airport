#pragma once
#ifndef INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H
#define INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H

#include "Events.h"

class EventAirplaneOnHoldExcess : public Events
{
   EventAirplaneOnHoldExcess(time_t eventTimeValue);
  ~EventAirplaneOnHoldExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
};

#endif //INCLUDED_EVENTAIRPLANEONHOLDEXCESS_H