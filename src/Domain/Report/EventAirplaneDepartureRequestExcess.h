#pragma once
#ifndef INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H
#define INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H

#include "Events.h"

class EventAirplaneDepartureRequestExcess : public Events
{
public:
   EventAirplaneDepartureRequestExcess();
  ~EventAirplaneDepartureRequestExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
};


#endif // INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H