#pragma once
#ifndef INCLUDED_CMD_H
#define INCLUDED_CMD_H

#include "UserI.h"

class Command
{
public:
   Command() = default;
   virtual ~Command() {}
   virtual void exec(UserI& ui) = 0;
};

#endif //INCLUDED_CMD_H