#pragma once
#ifndef INCLUDED_REPORTLANDEDSOFAR_H
#define INCLUDED_REPORTLANDEDSOFAR_H

#include "Reports.h"

class ReportLandedSoFar : public Reports
{
public:
   ReportLandedSoFar() = default;
   ~ReportLandedSoFar() = default;
   std::string newReport() override;
};

#endif //INCLUDED_REPORTLANDEDSOFAR_H