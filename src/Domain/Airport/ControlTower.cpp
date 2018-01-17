#include "ControlTower.h"
#include "Airplane.h"

ControlTower::ControlTower(const int maxPlanesLimit) : planesOnGround(0), arrivalCounter(0), departureCounter(0)
{
   maxPlanesOnGround= maxPlanesLimit;
}

void ControlTower::newArrivalRequest(Airplane& airplane)
{
   arrivalRequests.push_back(&airplane);
}

void ControlTower::newDepartureRequest(Airplane& airplane)
{
   departureRequests.push_back(&airplane);
}

bool ControlTower::arrivalRequestSent(Airplane& airplane)
{
   for (unsigned int i= 0; i < arrivalRequests.size(); i++) {
      if (arrivalRequests.at(i) == &airplane)
         return true;
   }
   return false;
}

bool ControlTower::departureRequestSent(Airplane& airplane)
{
   for(unsigned int i= 0; i < departureRequests.size(); i++) {
      if (departureRequests.at(i) == &airplane)
         return true;
   }
   return false;
}