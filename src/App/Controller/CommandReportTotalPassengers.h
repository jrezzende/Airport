#pragma once
#ifndef INCLUDED_COMMANDREPORTTOTALPASSENGERS_H
#define INCLUDED_COMMANDREPORTTOTALPASSENGERS_H
#include "Command.h"

class UserI;

class CommandReportTotalPassengers : public Command
{
public:
   CommandReportTotalPassengers() = default;
   ~CommandReportTotalPassengers() = default;

   void exec(UserI& ui) override;
};

#endif //INCLUDED_COMMANDREPORTTOTALPASSENGERS_H