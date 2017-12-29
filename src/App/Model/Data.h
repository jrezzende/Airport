#pragma once
#ifndef INCLUDED_MODEL_H
#define INCLUDED_MODEL_H

#include <string>

class List;

class Model
{
private:
   List* firstList;
   List* secondList;
   List* currentList;
   bool areInitialized= false;
   std::string currentName;

public:
   ~Model();
   Model();

   void createBothLists();
   std::string displayLists();
   bool concatenateLists(int pos);
   void deleteLists();
   bool fileExists();
   void setCurrentList(int listPos);

   List& getFirstList() { return *firstList; };
   List& getSecondList() { return *secondList;  };
   List& getCurrentList() { return *currentList; };
};

#endif // !INCLUDED_MODEL_H
