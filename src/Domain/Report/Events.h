#pragma once
#ifndef INCLUDED_LOG_H
#define INCLUDED_LOG_H

#include "Timer.h"
#include <sstream>

class Events
{
protected:
   time_t eventTime;
public:
   Events(time_t eventTimeValue) { eventTime= eventTimeValue; }
   ~Events() = default;
   virtual std::string eventDescription() = 0;
   virtual time_t getEventTime() = 0;
};

#endif //INCLUDED_LOG_H