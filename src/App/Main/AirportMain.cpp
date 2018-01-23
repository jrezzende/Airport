#include "EventAirplaneArrival.h"
#include "EventAirplaneToAnotherAirport.h"
#include "EventAirplaneArrivalRequest.h"
#include "EventAirplaneDeparture.h"
#include "EventAirplaneDepartureRequest.h"
#include "EventAirplaneOnHoldExcess.h"
#include "EventAirplaneDepartureRequestExcess.h"
#include "EventWindShift.h"
#include "UserI.h"
#ifndef INCLUDED_AIRPORTMAIN_H
#define INCLUDED_AIRPORTMAIN_H

#include "Airplane.h"
#include "AirplaneController.h"
#include "Airport.h"
#include "AirportRunway.h"
#include "WindController.h"
#include "Wind.h"
#include "ControlTower.h"
#include "Directions.h"
#include "Model.h"
#include "UserI.h"
#include "Events.h"
#include "Timer.h"

#include <iostream>

void main()
{
   auto model= Model::getInstance();
   auto* airplane1= new Airplane(10);
   EventAirplaneToAnotherAirport* eventTest= new EventAirplaneToAnotherAirport(airplane1->getName(), airplane1->getAirline());
   EventAirplaneArrival* eventtest1= new EventAirplaneArrival(airplane1->getName(), airplane1->getAirline(), airplane1->getTotalPassengers());
   EventAirplaneArrivalRequest* eventtest2= new EventAirplaneArrivalRequest(airplane1->getName(), airplane1->getAirline());
   EventAirplaneDeparture* eventtest3= new EventAirplaneDeparture(airplane1->getName(), airplane1->getAirline(), airplane1->getTotalPassengers());
   EventAirplaneDepartureRequest* eventtest4= new EventAirplaneDepartureRequest(airplane1->getName(), airplane1->getAirline());
   EventAirplaneOnHoldExcess* eventtest5= new EventAirplaneOnHoldExcess();
   EventAirplaneDepartureRequestExcess* eventtest6= new EventAirplaneDepartureRequestExcess();
   EventWindShift* eventtest7= new EventWindShift(Directions::NORTHEAST_SOUTHWEST);

   UserI::airportLimitOption();
   UserI::getOption();
}

#endif // INCLUDED_AIRPORTMAIN_H