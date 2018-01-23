#pragma once
#ifndef INCLUDED_COMMANDREPORTLANDEDSOFAR_H
#define INCLUDED_COMMANDREPORTLANDEDSOFAR_H
#include "Command.h"

class Model;

class CommandReportLandedSoFar : public Command
{
public:
   CommandReportLandedSoFar() = default;
   ~CommandReportLandedSoFar() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_COMMANDREPORTLANDEDSOFAR_H