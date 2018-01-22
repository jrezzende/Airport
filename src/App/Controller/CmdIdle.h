#pragma once
#ifndef INCLUDED_CMDIDLE_H
#define INCLUDED_CMDIDLE_H
#include "Cmd.h"

class UI;

class CmdIdle : public Cmd
{
public:
   CmdIdle() = default;
   ~CmdIdle() = default;

   void exec(UI& ui) override;
};

#endif //INCLUDED_CMDIDLE_H