#include "Directions.h"

string Directions::toString(Direction const dir)
{
   switch(dir) 
   {
   case NORTH_SOUTH: return "North-south";
   case SOUTH_NORTH: return "South-north";
   case EAST_WEST: return "East-west";
   case WEST_EAST: return "West-east";
   case NORTHWEST_SOUTHEAST: return "Northwest-southeast";
   case NORTHEAST_SOUTHWEST: return "Northeast-southwest";
   case SOUTHWEST_NORTHEAST: return "Southwest-northeast";
   case SOUTHEAST_NORTHWEST: return "Southeast-northwest";
   default: return "Wind couldn't be identified";
   }
}
