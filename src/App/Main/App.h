#pragma once
#ifndef INCLUDED_APP_H
#define INCLUDED_APP_H

#include "Model.h"
#include "View.h"
#include "User.h"

#include "Cmd.h"
#include "cAppend.h"
#include "cPrepend.h"
#include "cAddInPos.h"
#include "cConcatenate.h"
#include "cDisable.h"
#include "cDisableAll.h"
#include "cDisplay.h"
#include "cDisplayDesc.h"
#include "cIdle.h"
#include "cPurge.h"
#include "cSetValue.h"
#include "cSort.h"
#include "cCreateBothLists.h"
#include "cDeleteLists.h"
#include "cDisplayLists.h"
#include "cSetCurrentList.h"

class App
{
private: 
   Model* m;
   User* u;
   Cmd* cmd;
   bool selectList;

public:
   App() {
      m= new Model();
      u= new User();
      cmd= new cIdle();
      selectList= false;
   }

   ~App() {
      delete m;
      delete u;
      delete cmd;
   }

   void start();
   int firstCommand();
   int secondCommand();
   void runCommand();
};
#endif //INCLUDED_APP_H