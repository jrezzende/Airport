#include "Model.h"
#include "AirplaneController.h"

Model::Model()
{
   airport= Airport::getInstance();
   windController= new WindController();
   airplaneController= new AirplaneController();
}

Model* Model::model= nullptr;

Model * Model::getInstance()
{
   if (!model)
      model= new Model();

   return model;
}

void Model::launchModel()
{
   Timer::getInstance()->startTime();
}

void Model::modelRequestTracker()
{
   airplaneController->trackRequests();
   windController->requestTracker();
   airport->requestTracker();
}
