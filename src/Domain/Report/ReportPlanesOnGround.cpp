#include "ReportPlanesOnGround.h"
#include "Model.h"
#include "ControlTower.h"

std::string ReportPlanesOnGround::newReport()
{
   std::stringstream aux;
   std::deque<Events*> events= LogEvents::getInstance()->getEvents();
   
   for (auto it : events) {
      if (it->getEventType() == ARRIVAL)
         Model::getInstance()->getAirport().getControlTower().incrementPlanesOnGround();
      else if (it->getEventType() == DEPARTURE)
         Model::getInstance()->getAirport().getControlTower().decrementPlanesOnGround();
   }
   aux << "There are currently " << Model::getInstance()->getAirport().getControlTower().getPlanesOnGround() << " on ground.\n";

   return aux.str();
}
