#pragma once
#ifndef INCLUDED_REPORTTOTALPASSENGERS_H
#define INCLUDED_REPORTTOTALPASSENGERS_H

#include "Reports.h"

class ReportTotalPassengers : public Reports
{
public:
   ReportTotalPassengers() = default;
   ~ReportTotalPassengers() = default;
   std::string newReport() override;
};

#endif //INCLUDED_REPORTTOTALPASSENGERS_H