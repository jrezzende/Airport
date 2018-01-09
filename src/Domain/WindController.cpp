#include "WindController.h"
#include <sstream>

WindController::WindController()
{
   generateWind();
}

WindController::~WindController()
{
   ////
}

Wind * WindController::getCurrent()
{
   return current;
}

void WindController::generateWind()
{
   current= new Wind();
   timeLeftToChange= (unsigned long)Timer::getInstance()->getActualTime() + rand() % 10 + 4;

   stringstream winds;

   winds << Timer::getInstance()->formatTime(Timer::getInstance()->timeElapsed()) << " ----- " << toString(current->getWindDirection());
   nextWinds.push_back(winds.str());
}

vector<string> WindController::getWindsVector()
{
   return nextWinds;
}
