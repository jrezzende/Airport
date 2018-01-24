#include "CommandReportLandedSoFar.h"
#include "ReportLandedSoFar.h"
void CommandReportLandedSoFar::exec(UserI& ui)
{
   auto reportLandedSoFar= new ReportLandedSoFar();
   const std::string report= reportLandedSoFar->newReport();

   delete reportLandedSoFar;
   ui.printReports(report);
}
