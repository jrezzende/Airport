#pragma once
#ifndef INCLUDED_USERI_H
#define INCLUDED_USERI_H

#include "Airplane.h"
#include "AirportRunway.h"
#include "Wind.h"
#include "LogEvents.h"

#include <vector>

class UserI
{
   static UserI* instance;
   bool livePrinting= false;
   UserI();
   ~UserI();
   std::vector <std::string> eventsOnHold;
public:
   static UserI* getInstance();
   int airportLimitOption();
   int getOption();

   void invalidOption();

   void livePrintMode();
   void printEventsOnHold();

   void checkLivePrintMode(std::string text);
   void changePrintMode(bool flag);
   
   void printWindShift(Wind& current);
   void printAirplaneArrivalRequest(Airplane& airplane);
   void printPlaneArrival(Airplane& airplane, AirportRunway& runway);
   void printPlaneDepartureRequest(Airplane& airplane);
   void printPlaneDeparture(Airplane& airplane, AirportRunway& runway);

   void printCriticalAirplaneSentToAnotherAirport(Airplane& airplane);
   void printCriticalOnHoldHigherThanFive();
   void printCriticalOnGroundHigherThanSeventyPercent();
   void printCriticalPendingDepartureRequests();

   void printReports(std::string report);
};

#endif //INCLUDED_USERI_H