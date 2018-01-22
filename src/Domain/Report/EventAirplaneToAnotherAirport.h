#pragma once
#ifndef INCLUDED_EVENTAIRPLANETOANOTHERAIRPORT_H
#define INCLUDED_EVENTAIRPLANETOANOTHERAIRPORT_H

#include "Events.h"

class EventAirplaneToAnotherAirport : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
public:
   EventAirplaneToAnotherAirport(std::string vAirplaneName, std::string vAirplaneAirline);
  ~EventAirplaneToAnotherAirport() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
   void setEventTime(const time_t time) override { eventTime= time; }
};

#endif INCLUDED_EVENTAIRPLANETOANOTHERAIRPORT_H
