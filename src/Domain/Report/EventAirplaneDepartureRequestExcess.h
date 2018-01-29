#pragma once
#ifndef INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H
#define INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H

#include "Events.h"

class EventAirplaneDepartureRequestExcess : public Events
{
   std::string reportTime;
public:
   EventAirplaneDepartureRequestExcess();
  ~EventAirplaneDepartureRequestExcess() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string getReportTime() const { return reportTime; }
   std::string eventReportTime() override;
};


#endif // INCLUDED_EVENTAIRPLANEDEPARTUREREQUESTEXCESS_H