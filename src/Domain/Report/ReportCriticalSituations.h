#pragma once
#ifndef INCLUDED_REPORTCRITICALSITUATIONS_H
#define INCLUDED_REPORTCRITICALSITUATIONS_H

#include "Reports.h"

class ReportCriticalSituations : public Reports
{
public:
   ReportCriticalSituations() = default;
   ~ReportCriticalSituations() = default;
   std::string newReport() override;
};


#endif // INCLUDED_REPORTCRITICALSITUATIONS_H