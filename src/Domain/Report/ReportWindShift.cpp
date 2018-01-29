#include "ReportWindShift.h"

std::string ReportWindShift::newReport()
{
   std::stringstream aux;
   std::deque<Events*> events= LogEvents::getInstance()->getEvents();

   for(auto it : events) {
      if (it->getEventType() == WIND_SHIFT)
         aux << it->eventReportTime();
   }

   return aux.str();
}
