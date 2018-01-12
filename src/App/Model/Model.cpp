#include "Model.h"

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
