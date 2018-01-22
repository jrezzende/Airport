#pragma once
#ifndef INCLUDED_AIRPLANECONTROLLER_H
#define INCLUDED_AIRPLANECONTROLLER_H

#include <vector>

class Airplane;

class AirplaneController
{
   std::vector<Airplane*> airplanes;
   int addAirplane;

   int totalArrivalOfPassengers;
   int totalDepartureOfPassengers;
public:
   AirplaneController();
   ~AirplaneController() = default;

   void newAirplane();

   void arrivalRequest(Airplane& airplane);
   void departureRequest(Airplane& airplane);
   void requestTracker();

   void eraseAirplane(Airplane& airplane);
   static void totalPassengers(Airplane& airplane);

   int getArrivalPassengers() const { return totalArrivalOfPassengers; }
   int getDeparturePassengers() const { return totalDepartureOfPassengers; }
};

#endif // INCLUDED_AIRPLANECONTROLLER_H