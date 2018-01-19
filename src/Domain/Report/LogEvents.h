#pragma once
#ifndef INCLUDED_LOGEVENTS_H
#define INCLUDED_LOGEVENTS_H

#include "Events.h"
#include <deque>

class LogEvents
{
   std::deque<Events*> events;
   static LogEvents* instance;

public:
   LogEvents() = default;
   ~LogEvents();

   void newEvent(Events& newEvent);
   std::deque<Events*> getEvents() const { return events; }

   static LogEvents* getInstance();
};

#endif // INCLUDED_LOGEVENTS_H