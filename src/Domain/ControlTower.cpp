#include "ControlTower.h"

ControlTower::ControlTower(int maxPlanesLimit) : planesOnGround(0), departureCounter(0), arrivalCounter(0)
{
   maxPlanesOnGround= maxPlanesLimit;
}

void ControlTower::newArrivalRequest(Airplane * airplane)
{
   arrivalRequests.push_back(airplane);
}

void ControlTower::newDepartureRequest(Airplane * airplane)
{
   departureRequests.push_back(airplane);
}

void ControlTower::requestTracker()
{

}

bool ControlTower::landRequestSent(Airplane * airplane)
{
   return false;
}

bool ControlTower::takeOffRequestSent(Airplane * airplane)
{
   return false;
}
