#pragma once
#ifndef INCLUDED_COMMANDREPORTPLANESONHOLD_H
#define INCLUDED_COMMANDREPORTPLANESONHOLD_H
#include "Command.h"

class UserI;

class CommandReportPlanesOnHold : public Command
{
public:
   CommandReportPlanesOnHold() = default;
   ~CommandReportPlanesOnHold() = default;

   void exec(UserI& ui) override;
};

#endif //INCLUDED_COMMANDREPORTPLANESONHOLD_H