#pragma once

#ifndef INCLUDED_WINDGENERATOR_H
#define INCLUDED_WINDGENERATOR_H

#include "Wind.h"
#include "Timer.h"

#include <vector>
#include <string>

using namespace std;

class WindGenerator
{
private:
   Wind* current;
   unsigned long timeLeftToChange;
   vector<string> nextWinds;

public:
   WindGenerator();
   ~WindGenerator();

   Wind* getCurrent();
   void generateWind();

   vector<string> getWindsVector();
};

#endif // !1
