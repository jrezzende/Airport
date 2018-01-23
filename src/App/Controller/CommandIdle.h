#pragma once
#ifndef INCLUDED_CMDIDLE_H
#define INCLUDED_CMDIDLE_H
#include "Command.h"

class Model;

class CommandIdle : public Command
{
public:
   CommandIdle() = default;
   ~CommandIdle() = default;

   void exec(Model& m) override;
};

#endif //INCLUDED_CMDIDLE_H