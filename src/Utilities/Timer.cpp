#include "Timer.h"

Timer::Timer()
{
   time(&actualTime);
   begTime= getActualTime();
}

Timer::~Timer()
{
}

Timer* Timer::timer= nullptr;

Timer * Timer::getInstance()
{
   if (!timer)
      timer= new Timer();

   return timer;
}

unsigned long Timer::getTime()
{
   return time(&actualTime);
}

void Timer::aSec(unsigned long elapsed)
{
   _sleep(1000 - elapsed);
}

void Timer::startTime()
{
   unsigned long limit= begTime + 1440;
   
   for (; Timer::getInstance()->getActualTime() <= limit; Timer::getInstance()->aSec(0), Timer::getInstance()->getTime())
   {
      unsigned long elapsedTime= begTime + difftime(Timer::getInstance()->getActualTime(), begTime);

      if (difftime(Timer::getInstance()->getActualTime(), begTime) > 0)
         elapsedTime= begTime + difftime(Timer::getInstance()->getActualTime(), begTime) * 240;
   }
}

string Timer::formatTime(time_t time)
{
   struct tm* actualTime;
   char buffer[80];

   actualTime= localtime(&time);
   strftime(buffer, 80, "%H:%M %d/%m/%y", actualTime);

   return string(buffer);
}

unsigned long Timer::timeElapsed()
{
   return begTime + difftime(getActualTime(), begTime) * 240;
}

string Timer::getFormattedTime()
{
   return formatTime(timeElapsed());
}
