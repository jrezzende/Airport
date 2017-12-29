#include "User.h"

#include <iostream>
#include <string>

using namespace std;

int User::_GetValue()
{
   system("cls");

   cout << "--------------------------- \n";
   cout << "Insert the desired value for a node: \n";

   int value;
   cin >> value;

   return value;
}

int User::_GetIndex()
{
   system("cls");
   
   cout << "--------------------------- \n";
   cout << "Insert the desired node index: \n";

   int index;
   cin >> index;

   return index;
}

int User::_GetCurrentValue()
{
   system("cls");

   cout << "Choose the position of list you desire to work on.\n";
   cout << "Position 1 - First List.\n";
   cout << "Position 2 - Second List.\n";

   int option;
   cin >> option;
   
   system("cls");

   return option;
}

int User::_GetListPos()
{
   system("cls");

   cout << "Choose the list you desire to concatenate (attach to the end).\n";
   cout << "1 - First List.\n";
   cout << "2 - Second List.\n";

   int pos;
   cin >> pos;

   return pos;
}

/////////////////////

void User::_ClearScreen()
{
   system("cls");
}

void User::_Success()
{
   system("cls");

   cout << "Operation Successful.\n";
}

void User::_Fail()
{
   system("cls");

   cout << "Operation failed.\n";
}

void User::_Final(bool flag)
{
   system("cls");
   flag ? _Success() : _Fail();
}

void User::_FailIndex()
{
   system("cls");

   cout << "Invalid index value.\n";
}

void User::_InvalidOp()
{
   system("cls");

   cout << "Invalid Option.\n";
}

bool User::_Danger()
{
   system("cls");

   bool flag= false;

   cout << "Attention! This operation has permanent effects that cannot be reverted.\n Do you want to continue?\n";
   cout << "1 - Yes.\n";
   cout << "2 - No.\n";

   int option;
   cin >> option;

   switch (option) {
   case 1: flag= true; break;
   case 2: flag= false; break;
   default: _InvalidOp();
   }

   return flag;
}

void User::_Cancel()
{
   system("cls");

   cout << "Operation canceled.\n";
}

void User::_End()
{
   system("cls");

   cout << "Closing application...\n";
}

void User::_Purge()
{
   system("cls");

   cout << "Operation successful, nodes were erased from the file.\n";
}

//////////////////////////////////

void User::_PrintList(std::string list)
{
   system("cls");

   cout << list << endl;
}
