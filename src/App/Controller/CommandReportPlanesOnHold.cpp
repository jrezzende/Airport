#include "CommandReportPlanesOnHold.h"
#include "ReportPlanesOnHold.h"

void CommandReportPlanesOnHold::exec(UserI& ui)
{
   auto reportPlanesOnHold= new ReportPlanesOnHold();
   const std::string report= reportPlanesOnHold->newReport();

   delete reportPlanesOnHold;
   ui.printReports(report);
}
