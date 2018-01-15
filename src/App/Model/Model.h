#pragma once
#ifndef INCLUDED_MODEL_H
#define INCLUDED_MODEL_H

#include "Airport.h"
//#include "AirplaneController.h" weird bug
#include "WindController.h"

class AirplaneController;

class Model
{
   Model();
   static Model* model;
public:
   AirplaneController* airplaneController;
   WindController* windController;
   Airport* airport;

   static Model* getInstance();

   static void launchModel();
};

#endif // INCLUDED_MODEL_H