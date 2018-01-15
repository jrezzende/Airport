#include "WindController.h"
#include <sstream>

WindController::WindController() : current(nullptr), timeLeftToChange(0)
{
   generateWind();
}

Wind * WindController::getCurrent() const
{
   return current;
}

void WindController::generateWind()
{
   current= new Wind();
   timeLeftToChange= unsigned long(Timer::getInstance()->getActualTime() + rand() % 10 + 4);

   stringstream winds;

   winds << Timer::getInstance()->formatTime(Timer::getInstance()->timeElapsed()) << " ----- " << toString(current->getWindDirection());
   nextWinds.push_back(winds.str());
}

vector<string> WindController::getWindsVector() const
{
   return nextWinds;
}
