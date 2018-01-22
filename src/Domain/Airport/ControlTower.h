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
   
   void newArrivalRequest(Airplane* airplane);
   void newDepartureRequest(Airplane* airplane);

   bool arrivalRequestSent(Airplane& airplane);
   bool departureRequestSent(Airplane& airplane);
   void requestTracker();

   void flushArrival();
   void flushDeparture();

   int getArrivalCounter() const { return arrivalCounter; }
   int getDepartureCounter() const { return departureCounter; }
   int getMaxPlanesOnGround() { return maxPlanesOnGround; }
   void incrementPlanesOnGround() { planesOnGround++; }
   void decrementPlanesOnGround() { planesOnGround--; }
   int getPlanesOnGround() const { return planesOnGround; }
   int getArrivalPlanesOnHold() const { return arrivalRequests.size(); }
   int getDeparturePlanesOnHold() const { return departureRequests.size(); }
};

#endif // INCLUDED_CONTROLTOWER_H
