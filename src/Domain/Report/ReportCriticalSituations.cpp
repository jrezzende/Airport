#include "ReportCriticalSituations.h"

std::string ReportCriticalSituations::newReport()
{
   std::stringstream aux;
   std::deque<Events*> events= LogEvents::getInstance()->getEvents();

   aux << "Critical situations: \n";

   for (auto it : events) {
      if (it->getEventType() == CRITICAL_SITUATION)
         aux << it->eventDescription();
   }

   return aux.str();
}
