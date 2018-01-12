#include "AirplaneController.h"

AirplaneController::AirplaneController() : arrivalPassengers(0), departurePassengers(0)
{
   addAirplane= unsigned long(Timer::getInstance()->getActualTime() + rand() % 4 + 10);
}

void AirplaneController::arrivalRequest(Airplane * airplane)
{
   if (!Model::getInstance()->airport)
}

void AirplaneController::departureRequest(Airplane * airplane)
{
}

void AirplaneController::requestTracker()
{
}

void AirplaneController::newAirplane()
{
   airplanes.push_back(new Airplane(unsigned long(Timer::getInstance()->getActualTime())));
   addAirplane= unsigned long(Timer::getInstance()->getActualTime() + rand() % 4 + 1);
}

void AirplaneController::eraseAirplane(Airplane * airplane)
{
}

void AirplaneController::totalPassengers(Airplane * airplane)
{
}
