#pragma once 
#ifndef INCLUDED_EVENTAIRPLANEDEPARTUREREQUEST_H
#define INCLUDED_EVENTAIRPLANEDEPARTUREREQUEST_H

#include "Events.h"

class EventAirplaneDepartureRequest : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
public:
   EventAirplaneDepartureRequest(std::string vAirplaneName, std::string vAirplaneAirline);
  ~EventAirplaneDepartureRequest() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string eventReportTime() override;
};

#endif // INCLUDED_EVENTAIRPLANEDEPARTUREREQUEST_H