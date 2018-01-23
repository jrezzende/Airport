#pragma once
#ifndef INCLUDED_COMMANDREPORTPLANESONHOLD_H
#define INCLUDED_COMMANDREPORTPLANESONHOLD_H
#include "Command.h"

class Model;

class CommandReportPlanesOnHold : public Command
{
public:
   CommandReportPlanesOnHold() = default;
   ~CommandReportPlanesOnHold() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_COMMANDREPORTPLANESONHOLD_H