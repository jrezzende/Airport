#include "App.h"
#include "Airport.h"
#include "Model.h"
#include <cstdlib>
#include <thread>
#include "Command.h"
#include "CommandIdle.h"
#include "CommandReportCriticalSituations.h"
#include "CommandReportPlanesOnHold.h"
#include "CommandReportLandedSoFar.h"
#include "CommandReportPlanesOnGround.h"
#include "CommandReportTotalPassengers.h"
#include "CommandReportWindShift.h"

App::App()
{
   ui= UserI::getInstance();
   cmd= new CommandIdle();
}

App::~App()
{
   delete cmd;
}

App* App::app= nullptr;
App * App::getInstance()
{
   if (!app)
      app= new App();

   return app;
}

/////////////////////
void runThread(Model* model, int airportCap)
{
   model->launchModel();
   model->modelRequestTracker();
}
//////////////////////

void App::start()
{
   int airportCapacity= setAirportLimit();
   auto model = Model::getInstance();
   model->setAirportCapacity(airportCapacity);
   std::thread firstThread(runThread, model, airportCapacity);
   commands();
}

void App::commands()
{
   system("cls");
   int op= ui->getOption();
   do {
      switch (op)
      {
      case 1: system("cls"); CommandReportLandedSoFar().exec(*ui); break;
      case 2: system("cls"); CommandReportPlanesOnGround().exec(*ui); break;
      case 3: system("cls"); CommandReportPlanesOnHold().exec(*ui); break;
      case 4: system("cls"); CommandReportTotalPassengers().exec(*ui); break;
      case 5: system("cls"); CommandReportWindShift().exec(*ui); break;
      case 6: system("cls"); CommandReportCriticalSituations().exec(*ui); break;
      case 7: system("cls"); UserI::getInstance()->livePrintMode(); break;
      case 0: exit(0); break;
      default: break;
      }
      op= ui->getOption();
   } while (op != 999);
}

void App::runCmd()
{
   cmd->exec(*ui);
}

int App::setAirportLimit()
{
   return ui->airportLimitOption();
}
