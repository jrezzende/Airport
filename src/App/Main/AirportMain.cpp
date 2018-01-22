#include "EventAirplaneArrival.h"
#include "EventAirplaneToAnotherAirport.h"
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
#include "UI.h"
#include "Events.h"
#include "Timer.h"

#include <iostream>

void main()

{
   auto model= Model::getInstance();
   auto* airplane1= new Airplane(10);
   EventAirplaneToAnotherAirport* eventTest= new EventAirplaneToAnotherAirport(airplane1->getName(), airplane1->getAirline());
}

#endif // INCLUDED_AIRPORTMAIN_H