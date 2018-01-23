#pragma once
#ifndef INCLUDED_COMMANDREPORTPLANESONGROUND_H
#define INCLUDED_COMMANDREPORTPLANESONGROUND_H
#include "Command.h"

class Model;

class CommandReportPlanesOnGround : public Command
{
public:
   CommandReportPlanesOnGround() = default;
   ~CommandReportPlanesOnGround() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_COMMANDREPORTPLANESONGROUND_H