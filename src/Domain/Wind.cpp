#include "Wind.h"

Wind::Wind()
{
   random_device rd;
   mt19937 eng(rd());
   uniform_int_distribution<> distr(1, 8);

   int randomNum= distr(eng);

   switch (randomNum) {
   case 1: windDirection= Directions::NORTH_SOUTH; break;
   case 2: windDirection= Directions::SOUTH_NORTH; break;
   case 3: windDirection= Directions::EAST_WEST; break;
   case 4: windDirection= Directions::WEST_EAST; break;
   case 5: windDirection= Directions::NORTHWEST_SOUTHEAST; break;
   case 6: windDirection= Directions::NORTHEAST_SOUTHWEST; break;
   case 7: windDirection= Directions::SOUTHWEST_NORTHEAST; break;
   case 8: windDirection= Directions::SOUTHEAST_NORTHWEST; break;
   }

}

Wind::~Wind()
{
}
