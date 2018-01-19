#pragma once
#ifndef INCLUDED_REPORTPLANESONGROUND_H
#define INCLUDED_REPORTPLANESONGROUND_H

#include "Reports.h"

class ReportPlanesOnGround : public Reports
{
public:
   ReportPlanesOnGround() = default;
   ~ReportPlanesOnGround() = default;
   std::string newReport() override;
};

#endif //INCLUDED_REPORTPLANESONGROUND_H