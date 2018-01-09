#include "RandomGen.h"

int RandomGen::generateRandom(int outset, int end)
{
   std::random_device rd;
   std::mt19937 eng(rd());
   std::uniform_int_distribution<> distr(outset, end);

   return distr(eng);
}
