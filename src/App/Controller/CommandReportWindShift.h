#pragma once
#ifndef INCLUDED_COMMANDREPORTWINDSHIFT_H
#define INCLUDED_COMMANDREPORTWINDSHIFT_H
#include "Command.h"

class Model;

class CommandReportWindShift : public Command
{
public:
   CommandReportWindShift() = default;
   ~CommandReportWindShift() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_COMMANDREPORTWINDSHIFT_H