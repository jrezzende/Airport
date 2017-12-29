#include "App.h"

void App::start()
{
   int op= firstCommand();
   do {
      if (!selectList)
         op= firstCommand();
      else 
         secondCommand();
   } while (op);
}

int App::firstCommand()
{
   int op= View::getFirstOption();
   switch (op)
   {
   case 1: cmd= new cCreateBothLists(); break;
   case 2: cmd= new cDisplayLists(); break;
   case 3: cmd= new cConcatenate(); break;
   case 4: cmd= new cDeleteLists(); break;
   case 5: {
      if (m->fileExists()) {
         cmd= new cSetCurrentList();
         selectList= true;
      }
      else
         cmd= new cIdle(); u->_Fail();
         break;
      }
   default: u->_End(); exit(0); break;
   }
   runCommand();
   return op;
}

int App::secondCommand()
{
   int op= View::getSecondOption(m->getCurrentList().getListName());
   switch (op) 
   {
   case 1: cmd= new cPrepend(); break;
   case 2: cmd= new cAppend(); break;
   case 3: cmd= new cAddInPos(); break;
   case 4: cmd= new cDisable(); break;
   case 5: cmd= new cDisableAll(); break;
   case 6: cmd= new cDisplay(); break;
   case 7: cmd= new cDisplayDesc(); break;
   case 8: cmd= new cSort(); break;
   case 9: cmd= new cPurge(); break;
   case 10: system("cls"); cmd= new cIdle(); selectList= false; break;
   default: u->_InvalidOp();
   }
   runCommand();

   return op;
}

void App::runCommand()
{
   cmd->exec(*m, *u);
}
