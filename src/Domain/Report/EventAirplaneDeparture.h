#pragma once 
#ifndef INCLUDED_AIRPLANEDEPARTURE_H
#define INCLUDED_AIRPLANEDEPARTURE_H

#include "Events.h"

class EventAirplaneDeparture : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
   int numberOfPassengers;
public:
   EventAirplaneDeparture(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline, int vPassengers);
  ~EventAirplaneDeparture() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
};

#endif //INCLUDED_AIRPLANEDEPARTURE_H