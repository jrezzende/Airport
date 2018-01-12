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

void main()
{
   auto* model= Model::getInstance();
   Airplane* airplane1= new Airplane(20);
   Airplane* airplane2= new Airplane(25);
   Airplane* airplane3= new Airplane(15);

}

#endif // INCLUDED_AIRPORTMAIN_H