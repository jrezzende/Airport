#include "CommandReportCriticalSituations.h"
#include "ReportCriticalSituations.h"

void CommandReportCriticalSituations::exec(UserI& ui)
{
   auto reportCriticalSituations= new ReportCriticalSituations();
   const std::string report= reportCriticalSituations->newReport();
   
   delete reportCriticalSituations;
   ui.printReports(report);
}
