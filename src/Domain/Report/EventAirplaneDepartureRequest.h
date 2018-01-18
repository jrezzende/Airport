#pragma once 
#ifndef INCLUDED_EVENTAIRPLANEDEPARTUREREQUEST_H
#define INCLUDED_EVENTAIRPLANEDEPARTUREREQUEST_H

#include "Events.h"

class EventAirplaneDepartureRequest : public Events
{
   std::string airplaneName;
   std::string airplaneAirline;
public:
   EventAirplaneDepartureRequest(time_t eventTimeValue, std::string vAirplaneName, std::string vAirplaneAirline);
  ~EventAirplaneDepartureRequest() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
};

#endif // INCLUDED_EVENTAIRPLANEDEPARTUREREQUEST_H