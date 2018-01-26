#include "Model.h"

Model::Model()
{
   airport= Airport::getInstance();
   windController= new WindController();
   airplaneController= new AirplaneController();
}

Model* Model::model= nullptr;

Model* Model::getInstance()
{
   if (!model)
      model= new Model();

   return model;
}

void Model::modelRequestTracker()
{
   airplaneController->requestTracker();
   windController->requestTracker();
   airport->requestTracker();
}

void Model::launchModel()
{
   Timer::getInstance()->startTime();
}

void Model::setAirportCapacity(int capacity)
{
   getInstance();
   airport->setAirportCapacity(capacity);
}