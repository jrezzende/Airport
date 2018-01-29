#pragma once 
#ifndef INCLUDED_EVENTAIRPLANEARRIVALREQUEST_H
#define INCLUDED_EVENTAIRPLANEARRIVALREQUEST_H

#include "Events.h"

class EventAirplaneArrivalRequest : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
public:
   EventAirplaneArrivalRequest(std::string vAirplaneName, std::string vAirplaneAirline);
  ~EventAirplaneArrivalRequest() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string eventReportTime() override;
};

#endif //INCLUDED_EVENTAIRPLANEREQUEST_H