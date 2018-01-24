#include "CommandReportWindShift.h"
#include "ReportWindShift.h"

void CommandReportWindShift::exec(UserI& ui)
{
   auto reportWindShift= new ReportWindShift();
   const std::string report= reportWindShift->newReport();

   delete reportWindShift;
   ui.printReports(report);
}
