#pragma once
#ifndef INCLUDED_USER_H
#define INCLUDED_USER_H

#include "Model.h"

#include <string>

class User
{
public:
   int _GetValue();
   int _GetIndex();
   int _GetCurrentValue();
   int _GetListPos();
   //////////////////
   void _ClearScreen();
   void _Success();
   void _Fail();
   void _Final(bool);
   void _FailIndex();
   void _InvalidOp();
   bool _Danger();
   void _Cancel();
   void _End();
   //////////////////
   void _Purge();
   void _PrintList(std::string);
};

#endif // INCLUDED_USER_H
