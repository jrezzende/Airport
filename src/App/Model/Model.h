#pragma once
#ifndef INCLUDED_MODEL_H
#define INCLUDED_MODEL_H

#include "LogEvents.h"
#include "Airport.h"
#include "AirplaneController.h"
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
   LogEvents* logEvents;

   static Model* getInstance();
   WindController& getWindController() const { return *windController; }
   AirplaneController& getAirplaneController() const { return *airplaneController;}
   Airport& getAirport() const { return *airport; }
   LogEvents& getLogEvents() const { return *logEvents; }

   static void launchModel();
   void modelRequestTracker();
};

#endif // INCLUDED_MODEL_H