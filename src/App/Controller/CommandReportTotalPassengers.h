#pragma once
#ifndef INCLUDED_COMMANDREPORTTOTALPASSENGERS_H
#define INCLUDED_COMMANDREPORTTOTALPASSENGERS_H
#include "Command.h"

class Model;

class CommandReportTotalPassengers : public Command
{
public:
   CommandReportTotalPassengers() = default;
   ~CommandReportTotalPassengers() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_COMMANDREPORTTOTALPASSENGERS_H