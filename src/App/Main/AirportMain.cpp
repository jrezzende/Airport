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

#include <iostream>

void main()
{
   UI::airportLimitOption();
   std::cout << endl;
   UI::getFirstOption();
   std::cout << endl;
   UI::getSecondOption();
   std::cout << endl;
}

#endif // INCLUDED_AIRPORTMAIN_H