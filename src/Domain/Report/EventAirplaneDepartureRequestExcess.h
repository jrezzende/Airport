#pragma once
#ifndef INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H
#define INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H

#include "Events.h"

class EventAirplaneDepartureRequestExcess : public Events
{
   EventAirplaneDepartureRequestExcess(time_t eventTimeValue);
  ~EventAirplaneDepartureRequestExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
};


#endif // INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H