#include "ReportLandedSoFar.h"

std::string ReportLandedSoFar::newReport()
{
   std::stringstream aux;
   std::deque<Events*> events= LogEvents::getInstance()->getEvents();
   int airplanesLandedSoFar= 0;

   for (auto it : events)
      if (it->getEventType() == ARRIVAL)
         airplanesLandedSoFar++;

   aux << "Number of airplanes landed so far: " << airplanesLandedSoFar << ".";

   return aux.str();
}
