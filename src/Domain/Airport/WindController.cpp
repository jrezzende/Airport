#include "WindController.h"
#include "Timer.h"
#include <sstream>
#include <iostream>
#include "EventWindShift.h"
#include "LogEvents.h"

WindController::WindController()
{
   current= new Wind();
   timeLeftToChange= unsigned long(Timer::getInstance()->getActualTime() + rand() % 10 + 4);

   auto* event= new EventWindShift(current->getWindDirection());
   LogEvents::getInstance()->newEvent(*event);
}

Wind * WindController::getCurrent() const
{
   return current;
}

void WindController::generateRandomWind()
{
   current= new Wind();
   timeLeftToChange= unsigned long(Timer::getInstance()->getActualTime() + rand() % 10 + 4);

   stringstream winds;

   winds << Timer::getInstance()->formatTime(Timer::getInstance()->timeElapsed()) << " ----- " << toString(current->getWindDirection());
   nextWinds.push_back(winds.str());
}

void WindController::requestTracker()
{
   if(unsigned long(Timer::getInstance()->getActualTime() >= timeLeftToChange)) {
      generateRandomWind();

      auto* event= new EventWindShift(current->getWindDirection());
      LogEvents::getInstance()->newEvent(*event);
   }
}

vector<string> WindController::getWindsVector() const
{
   return nextWinds;
}

