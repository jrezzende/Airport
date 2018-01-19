#pragma once
#ifndef INCLUDED_LOG_H
#define INCLUDED_LOG_H

#include "Timer.h"
#include <sstream>

enum EventType
{
   ARRIVAL,
   ARRIVALREQUEST,
   DEPARTURE,
   DEPARTURE_REQUEST,
   CRITICAL_SITUATION,
   RUNWAY_NOW_FREE,
   WIND_SHIFT
};

class Events
{
protected:
   time_t eventTime;
   EventType eventType;
public:
   Events(const time_t eventTimeValue, const EventType eventTypeValue) { eventTime= eventTimeValue; eventType= eventTypeValue; }
   ~Events() = default;
   virtual std::string eventDescription() = 0;
   virtual time_t getEventTime() = 0;
   virtual EventType getEventType() const = 0;
};

#endif //INCLUDED_LOG_H