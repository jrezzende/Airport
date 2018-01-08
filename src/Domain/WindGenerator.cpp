#include "WindGenerator.h"
#include <sstream>

WindGenerator::WindGenerator()
{
   current= new Wind();
   timeLeftToChange= (unsigned long)Timer::getInstance()->getActualTime() + rand() % 10 + 4;

   stringstream winds;

   winds << Timer::getInstance()->formatTime(Timer::getInstance()->timeElapsed()) << " ----- " << toString(current->getWindDirection());
   nextWinds.push_back(winds.str());
}

WindGenerator::~WindGenerator()
{
   ////
}

Wind * WindGenerator::getCurrent()
{
   return current;
}

void WindGenerator::generateWind()
{
   current= new Wind();
   timeLeftToChange= (unsigned long)Timer::getInstance()->getActualTime() + rand() % 10 + 4;

   stringstream winds;

   winds << Timer::getInstance()->formatTime(Timer::getInstance()->timeElapsed()) << " ----- " << toString(current->getWindDirection());
   nextWinds.push_back(winds.str());
}

vector<string> WindGenerator::getWindsVector()
{
   return nextWinds;
}
