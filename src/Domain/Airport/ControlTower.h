#pragma once
#ifndef INCLUDED_CONTROLTOWER_H
#define INCLUDED_CONTROLTOWER_H

#include <deque>

class Airplane;

class ControlTower
{
   int maxPlanesOnGround;
   int planesOnGround;
   int arrivalCounter;;
   int departureCounter;

   std::deque<Airplane*> arrivalRequests;
   std::deque<Airplane*> departureRequests;

public:
   ControlTower(int maxPlanesLimit);
   ~ControlTower() = default;
   
   int getMaxPlanesOnGround() const { return maxPlanesOnGround; }
   void setMaxPlanesOnGround(const int value) { maxPlanesOnGround= value; }
   
   void newArrivalRequest(Airplane& airplane);
   void newDepartureRequest(Airplane& airplane);

   bool arrivalRequestSent(Airplane& airplane);
   bool departureRequestSent(Airplane& airplane);

   int getArrivalCounter() const { return arrivalCounter; }
   int getDepartureCounter() const { return departureCounter; }
   int getMaxPlanesOnGround() { return maxPlanesOnGround; }
   int getPlanesOnGround() const { return planesOnGround; }
   int getLandingPlanesOnHold() const { return arrivalRequests.size(); }
};

#endif // INCLUDED_CONTROLTOWER_H
