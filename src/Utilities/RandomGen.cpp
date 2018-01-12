#include "RandomGen.h"

int RandomGen::generateRandom(const int outset, const int end)
{
   std::random_device rd;
   std::mt19937 eng(rd());
   std::uniform_int_distribution<> const distr(outset, end);

   return distr(eng);
}
