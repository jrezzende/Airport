#pragma once
#ifndef INCLUDED_COMMANDREPORTPLANESONGROUND_H
#define INCLUDED_COMMANDREPORTPLANESONGROUND_H
#include "Command.h"

class UserI;

class CommandReportPlanesOnGround : public Command
{
public:
   CommandReportPlanesOnGround() = default;
   ~CommandReportPlanesOnGround() = default;

   void exec(UserI& ui) override;
};

#endif //INCLUDED_COMMANDREPORTPLANESONGROUND_H