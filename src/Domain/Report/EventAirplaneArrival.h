#pragma once 
#ifndef INCLUDED_EVENTAIRPLANEARRIVAL_H
#define INCLUDED_EVENTAIRPLANEARRIVAL_H

#include "Events.h"

class EventAirplaneArrival : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
   int numberOfPassengers;
public:
   EventAirplaneArrival(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline, int vPassengers);
  ~EventAirplaneArrival() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
   EventType getEventType() const override;
};

#endif //INCLUDED_EVENTAIRPLANEARRIVAL_H