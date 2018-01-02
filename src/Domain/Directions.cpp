#include "Directions.h"

string Directions::toString(Direction dir)
{
   switch(dir) 
   {
   case NORTH: return "North";
   case SOUTH: return "South";
   case EAST: return "East";
   case WEST: return "West";
   case NORTHWEST: return "Northwest";
   case NORTHEAST: return "Northeast";
   case SOUTHWEST: return "Southwest";
   case SOUTHEAST: return "Southeast";
   default: return "Wind couldn't be identified";
   }
}
