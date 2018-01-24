#pragma once
#ifndef INCLUDED_COMMANDREPORTWINDSHIFT_H
#define INCLUDED_COMMANDREPORTWINDSHIFT_H
#include "Command.h"

class UserI;

class CommandReportWindShift : public Command
{
public:
   CommandReportWindShift() = default;
   ~CommandReportWindShift() = default;

   void exec(UserI& ui) override;
};

#endif //INCLUDED_COMMANDREPORTWINDSHIFT_H