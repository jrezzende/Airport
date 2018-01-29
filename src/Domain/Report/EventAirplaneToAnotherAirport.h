#pragma once
#ifndef INCLUDED_EVENTAIRPLANETOANOTHERAIRPORT_H
#define INCLUDED_EVENTAIRPLANETOANOTHERAIRPORT_H

#include "Events.h"

class EventAirplaneToAnotherAirport : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
   std::string reportTime;
public:
   EventAirplaneToAnotherAirport(std::string vAirplaneName, std::string vAirplaneAirline);
  ~EventAirplaneToAnotherAirport() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
   std::string getReportTime() const { return reportTime; }
   std::string eventReportTime() override;
};

#endif INCLUDED_EVENTAIRPLANETOANOTHERAIRPORT_H
