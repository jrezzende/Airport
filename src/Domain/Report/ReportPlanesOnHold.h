#pragma once
#ifndef INCLUDED_REPORTPLANESONHOLD_H
#define INCLUDED_REPORTPLANESONHOLD_H

#include "Reports.h"

class ReportPlanesOnHold : public Reports
{
public:
   ReportPlanesOnHold() = default;
   ~ReportPlanesOnHold() = default;
   std::string newReport() override;
};

#endif //INCLUDED_REPORTPLANESONHOLD_H