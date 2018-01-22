#include "ReportPlanesOnHold.h"
#include "Model.h"
#include "ControlTower.h"

std::string ReportPlanesOnHold::newReport()
{
   std::stringstream aux;
   int totalPlanesOnHold= Model::getInstance()->getAirport().getControlTower().getArrivalPlanesOnHold() + Model::getInstance()->getAirport().getControlTower().getDeparturePlanesOnHold();

   aux << "There are " << totalPlanesOnHold << " airplanes waiting to arrive/depart.\n";

   return aux.str();
}
