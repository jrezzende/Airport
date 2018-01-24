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
void runThread(Model * model)
{
   model->launchModel();
}
///////////////////////

void App::start()
{
   std::thread firstThread(runThread, (Model::getInstance()));
   commands();
}

void App::commands()
{
   int op= ui->getOption();
   do {
      switch (op)
      {
      case 1: cmd= new CommandReportLandedSoFar(); break;
      case 2: cmd= new CommandReportPlanesOnGround(); break;
      case 3: cmd= new CommandReportPlanesOnHold(); break;
      case 4: cmd= new CommandReportTotalPassengers(); break;
      case 5: cmd= new CommandReportWindShift(); break;
      case 6: cmd= new CommandReportCriticalSituations(); break;
      default: cmd= new CommandIdle(); ui->invalidOption();
      }
      runCmd();
   } while (op != NULL);
}

void App::runCmd()
{
   cmd->exec(*ui);
}

int App::setAirportLimit()
{
   return ui->airportLimitOption();
}
