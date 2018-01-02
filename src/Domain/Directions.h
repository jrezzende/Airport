#pragma once

#ifndef INCLUDED_DIRECTIONS_H
#define INCLUDED_DIRECTIONS_H

#include <string>

using namespace std;

namespace Directions
{
   enum Direction {
      NORTH,
      SOUTH,
      EAST,
      WEST,
      NORTHWEST,
      NORTHEAST,
      SOUTHWEST,
      SOUTHEAST
   };

   string toString(Direction dir);
}

#endif // !INCLUDED_DIRECTIONS_H
