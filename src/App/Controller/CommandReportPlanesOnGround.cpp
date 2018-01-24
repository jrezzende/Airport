#include "CommandReportPlanesOnGround.h"
#include "ReportPlanesOnGround.h"

void CommandReportPlanesOnGround::exec(UserI& ui)
{
   auto reportPlanesOnGround= new ReportPlanesOnGround();
   const std::string report= reportPlanesOnGround->newReport();

   delete reportPlanesOnGround;
   ui.printReports(report);
}
