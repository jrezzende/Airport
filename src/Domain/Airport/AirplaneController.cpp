#include "AirplaneController.h"
#include "Model.h"
#include "Timer.h"
#include "ControlTower.h"
#include "Airplane.h"

AirplaneController::AirplaneController() : addAirplane(0), totalArrivalOfPassengers(0), totalDepartureOfPassengers(0)
{
   addAirplane= unsigned long(Timer::getInstance()->getActualTime() + rand() % 4 + 10);
}

void AirplaneController::newAirplane()
{
   airplanes.push_back(new Airplane(unsigned long(Timer::getInstance()->getActualTime())));
   addAirplane= unsigned long(Timer::getInstance()->getActualTime() + rand() % 4 + 1);
}

void AirplaneController::arrivalRequest(Airplane& airplane)
{
   if (!Model::getInstance()->airport->getControlTower()->arrivalRequestSent(airplane)) {
      airplane.setTotalPassengers();
      totalArrivalOfPassengers+= airplane.getTotalPassengers();

      Model::getInstance()->airport->getControlTower()->newArrivalRequest(airplane);
   }
}

void AirplaneController::departureRequest(Airplane& airplane)
{
   if (!Model::getInstance()->airport->getControlTower()->departureRequestSent(airplane)) {
      airplane.setTotalPassengers();
      totalArrivalOfPassengers+= airplane.getTotalPassengers();

      Model::getInstance()->airport->getControlTower()->newDepartureRequest(airplane);
   }
}

void AirplaneController::eraseAirplane(Airplane& airplane)
{
   for (unsigned int i= 0; i < airplanes.size(); i++) {
      if (airplanes.at(i) == &airplane)
         airplanes.erase(airplanes.begin() + i);
   }
}

void AirplaneController::totalPassengers(Airplane& airplane)
{
   airplane.setTotalPassengers();
}
