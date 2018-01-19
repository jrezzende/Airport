#pragma once
#ifndef INCLUDED_REPORTS_H
#define INCLUDED_REPORTS_H

#include "LogEvents.h"
#include <sstream>

class Reports
{
public:
   Reports() = default;
   ~Reports() = default;
  virtual std::string newReport() = 0;
};

#endif //INCLUDED_REPORTS_H