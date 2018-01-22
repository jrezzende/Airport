#pragma once
#ifndef INCLUDED_WINDGENERATOR_H
#define INCLUDED_WINDGENERATOR_H

#include "Wind.h"
#include "Timer.h"

#include <vector>
#include <string>

using namespace std;

class WindController
{
   Wind* current;
   unsigned long timeLeftToChange;
   vector<string> nextWinds;

public:
   WindController();
   ~WindController() = default;

   Wind* getCurrent() const;
   void generateRandomWind();
   void requestTracker();

   vector<string> getWindsVector() const;
};

#endif // INCLUDED_WINDGENERATOR_H
