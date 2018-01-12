#pragma once
#ifndef INCLUDED_MODEL_H
#define INCLUDED_MODEL_H

#include "Airport.h"
#include "AirplaneController.h"
#include "WindController.h"

class Model
{
private:
   Model();
   static Model* model;
public:
   Airport* airport;
   WindController* windController;
   AirplaneController* airplaneController;

   static Model* getInstance();

   void launchModel();
};

#endif // INCLUDED_MODEL_H