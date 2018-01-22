#pragma once
#ifndef INCLUDED_CMD_H
#define INCLUDED_CMD_H

class UI;

class Cmd
{
public:
   Cmd() = default;
   virtual ~Cmd()= 0;
   virtual void exec(UI&) = 0;
};

#endif //INCLUDED_CMD_H