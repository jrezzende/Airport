#pragma once
#ifndef INCLUDED_CADDINPOS_H
#define INCLUDED_CADDINPOS_H

#include "Cmd.h"

class cAddInPos : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CADDINPOS_H
