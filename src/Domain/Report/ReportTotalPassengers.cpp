#include "ReportTotalPassengers.h"
#include "Model.h"
#include "ControlTower.h"

std::string ReportTotalPassengers::newReport()
{
   std::stringstream aux;
   const int totalPassengers= Model::getInstance()->getAirport().getControlTower().getArrivalCounter() 
   + Model::getInstance()->getAirport().getControlTower().getDepartureCounter();

   aux << "Currently " << totalPassengers << " arrived/departed to/from the airport.";
   
   return aux.str();
}
