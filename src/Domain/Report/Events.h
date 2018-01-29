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
   EventType eventType;
   time_t eventTime;
public:
   Events(const EventType eventTypeValue) { eventTime= Timer::getInstance()->getActualTime(); eventType= eventTypeValue; }
   ~Events() = default;
   virtual std::string eventDescription() = 0;
   virtual time_t getEventTime() = 0;
   virtual EventType getEventType() const = 0;
   virtual void setEventTime(const time_t time) = 0;
   virtual std::string eventReportTime() = 0;
};

#endif //INCLUDED_LOG_H