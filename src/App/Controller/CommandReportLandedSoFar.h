#pragma once
#ifndef INCLUDED_COMMANDREPORTLANDEDSOFAR_H
#define INCLUDED_COMMANDREPORTLANDEDSOFAR_H
#include "Command.h"

class UserI;

class CommandReportLandedSoFar : public Command
{
public:
   CommandReportLandedSoFar() = default;
   ~CommandReportLandedSoFar() = default;

   void exec(UserI& m) override;
};

#endif //INCLUDED_COMMANDREPORTLANDEDSOFAR_H