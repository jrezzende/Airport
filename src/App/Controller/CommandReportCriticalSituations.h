#pragma once
#ifndef INCLUDED_COMMANDREPORTCRITICALSITUATIONS_H
#define INCLUDED_COMMANDREPORTCRITICALSITUATIONS_H
#include "Command.h"

class Model;

class CommandReportCriticalSituations : public Command
{
public:
   CommandReportCriticalSituations() = default;
   ~CommandReportCriticalSituations() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_COMMANDREPORTCRITICALSITUATIONS_H