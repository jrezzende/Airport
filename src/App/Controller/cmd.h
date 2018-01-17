#pragma once
#ifndef INCLUDED_CMD_H
#define INCLUDED_CMD_H

class Cmd
{
public:
   Cmd() = default;
   virtual void exec() = 0;
};

#endif //INCLUDED_CMD_H