#pragma once
#ifndef INCLUDED_COMMANDREPORTCRITICALSITUATIONS_H
#define INCLUDED_COMMANDREPORTCRITICALSITUATIONS_H
#include "Command.h"

class UserI;

class CommandReportCriticalSituations : public Command
{
public:
   CommandReportCriticalSituations() = default;
   ~CommandReportCriticalSituations() = default;

   void exec(UserI& ui) override;
};

#endif //INCLUDED_COMMANDREPORTCRITICALSITUATIONS_H