#include "cAddInPos.h"

void cAddInPos::exec(Model& m, User &u)
{
   int value= u._GetValue();
   int index= u._GetIndex();
   
   m.getCurrentList().addInPos(value, index);
   u._Success();

   return;
}
