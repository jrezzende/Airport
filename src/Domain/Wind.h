#pragma once
#ifndef INCLUDED_WIND_H
#define INCLUDED_WIND_H

#include "Directions.h"

class Wind
{
   Directions::Direction windDirection;

public:
   Wind();
   ~Wind() = default;

   Directions::Direction getWindDirection() const { return windDirection; }
};

#endif // !INCLUDED_WIND_H