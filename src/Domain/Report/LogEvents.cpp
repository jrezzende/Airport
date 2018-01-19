#include "LogEvents.h"

LogEvents* LogEvents::instance= nullptr;

LogEvents* LogEvents::getInstance()
{
   if (!instance)
      instance= new LogEvents();

   return instance;
}
/////////////////////////////////////////
LogEvents::~LogEvents()
{
   events.clear();

   instance= nullptr;
}

void LogEvents::newEvent(Events& newEvent)
{
   events.push_back(&newEvent);
}
