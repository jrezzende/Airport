#pragma once
#ifndef INCLUDED_CMDIDLE_H
#define INCLUDED_CMDIDLE_H
#include "Command.h"

class UserI;

class CommandIdle : public Command
{
public:
   CommandIdle() = default;
   ~CommandIdle() = default;

   void exec(UserI& ui) override;
};

#endif //INCLUDED_CMDIDLE_H