#pragma once
#ifndef INCLUDED_APP_H
#define INCLUDED_APP_H

#include "UserI.h"
#include "Model.h"

class Command;
class CommandIdle;
class CommandReportCriticalSituations;
class CommandReportLandedSoFar;
class CommandReportPlanesOnGround;
class CommandPlanesOnHold;
class CommandReportTotalPassengers;
class CommandReportWindShift;

class App
{
   static App* app;
   UserI* ui;
   Command* cmd;
public:
   App();
   ~App();

   static App* getInstance();

   void start();
   void commands();
   void runCmd();

   int setAirportLimit();
};

#endif //INCLUDED_APP_H
