#pragma once
#ifndef INCLUDED_CMD_H
#define INCLUDED_CMD_H

class Model;

class Command
{
public:
   Command() = default;
   virtual ~Command()= 0;
   virtual void exec(Model&) = 0;
};

#endif //INCLUDED_CMD_H