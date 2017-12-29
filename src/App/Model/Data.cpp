#include "Model.h"
#include "List.h"

#include <sstream>

Model::Model()
{
   firstList= new List("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/firstList.bin");
   firstList->setListName("firstList.bin");

   secondList= new List("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/secondList.bin");
   secondList->setListName("secondList.bin");

   currentList= nullptr;
}

Model::~Model()
{
   if (firstList) delete firstList;
   if (secondList) delete secondList;

   firstList= secondList= nullptr;
}

void Model::createBothLists()
{
   if (firstList) {
      firstList->disableAllNodes();
      firstList->purge();
   }
   else {
      firstList= new List("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/firstList.bin");
      firstList->setListName("First List");
   }

   if (secondList) {
      secondList->disableAllNodes();
      secondList->purge();
   }
   else {
      secondList= new List("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/secondList.bin");
      secondList->setListName("Second List");
   }
}

std::string Model::displayLists()
{
   ostringstream buf;

   buf << "In position 1, the list name is: firstList.bin.\nIn position 2, the list name is: secondList.bin.";

   return buf.str();
}

bool Model::concatenateLists(int pos)
{
   if ((pos != 1) && (pos != 2))
      return false;

   if (pos == 1)
      secondList->concatenateList(*firstList);
   else if (pos == 2)
      firstList->concatenateList(*secondList);

   return true;
}

void Model::deleteLists()
{
   firstList->disableAllNodes();
   firstList->purge();

   secondList->disableAllNodes();
   secondList->purge();

   firstList->closeFile();
   secondList->closeFile();
   
   remove("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/firstList.bin");
   remove("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/secondList.bin");

   return;
}

bool Model::fileExists()
{
   bool flag= false;

   ifstream infile("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/firstList.bin");
   ifstream infile2("C:/Users/joao.mathias/source/repos/CMakeBinFile/src/Domain/secondList.bin");

   flag= (infile.good()) && (infile2.good());

   infile.close();
   infile2.close();

   return flag;
}

void Model::setCurrentList(int listPos)
{
   if (listPos == 1)
      currentList= firstList;

   else if (listPos == 2) 
      currentList= secondList;

   return;
}
