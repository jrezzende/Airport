#pragma once
#ifndef INCLUDED_AIRPLANECONTROLLER_H
#define INCLUDED_AIRPLANECONTROLLER_H

#include "Model.h"
#include "Timer.h"
#include "Airplane.h"
#include <vector>

class AirplaneController
{
private:
   std::vector<Airplane*> airplanes;
   int addAirplane;

   int arrivalPassengers;
   int departurePassengers;
public:
   AirplaneController();
   ~AirplaneController() = default;

   void arrivalRequest(Airplane* airplane);
   void departureRequest(Airplane* airplane);

   void requestTracker();

   void newAirplane();
   void eraseAirplane(Airplane* airplane);
   void totalPassengers(Airplane* airplane);

   int getArrivalPassengers() const { return arrivalPassengers; }
   int getDeparturePassengers() const { return departurePassengers; }

};

#endif // INCLUDED_AIRPLANECONTROLLER_H