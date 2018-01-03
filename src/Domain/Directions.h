#pragma once

#ifndef INCLUDED_DIRECTIONS_H
#define INCLUDED_DIRECTIONS_H

#include <string>

using namespace std;

namespace Directions
{
   enum Direction {
      NORTH_SOUTH,
      SOUTH_NORTH,
      EAST_WEST,
      WEST_EAST,
      NORTHWEST_SOUTHEAST,
      NORTHEAST_SOUTHWEST,
      SOUTHWEST_NORTHEAST,
      SOUTHEAST_NORTHWEST
   };

   string toString(Direction dir);
}

#endif // !INCLUDED_DIRECTIONS_H
