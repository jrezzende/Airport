#pragma once
#ifndef INCLUDED_REPORTWINDSHIFT_H
#define INCLUDED_REPORTWINDSHIFT_H

#include "Reports.h"

class ReportWindShift : public Reports
{
public:
   ReportWindShift() = default;
   ~ReportWindShift() = default;
   std::string newReport() override;
};

#endif //INCLUDED_REPORTWINDSHIFT_H