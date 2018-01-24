#include "CommandReportTotalPassengers.h"
#include "ReportTotalPassengers.h"

void CommandReportTotalPassengers::exec(UserI& ui)
{
   auto reportTotalPassengers= new ReportTotalPassengers();
   const std::string report= reportTotalPassengers->newReport();

   delete reportTotalPassengers;
   ui.printReports(report);
}
