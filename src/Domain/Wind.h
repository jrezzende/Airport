#pragma once

#ifndef INCLUDED_WIND_H
#define INCLUDED_WIND_H

#include "Directions.h"
#include "RandomGen.h"

class Wind
{
private:
   Directions::Direction windDirection;

public:
   Wind();
   ~Wind();

   Directions::Direction getWindDirection() { return windDirection; }
};

#endif // !INCLUDED_WIND_H