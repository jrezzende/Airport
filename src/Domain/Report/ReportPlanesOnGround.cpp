#include "ReportPlanesOnGround.h"
#include "Model.h"
#include "ControlTower.h"

std::string ReportPlanesOnGround::newReport()
{
   std::stringstream aux;
   std::deque<Events*> events= LogEvents::getInstance()->getEvents();
   
   aux << "There are currently " << Model::getInstance()->getAirport().getControlTower().getPlanesOnGround() << " airplanes on ground.";

   return aux.str();
}
