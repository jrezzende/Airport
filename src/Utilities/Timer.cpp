#include "Timer.h"
#include "windows.h"

Timer::Timer()
{
   time(&actualTime);
   begTime= unsigned long(getActualTime());
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
   return unsigned long(time(&actualTime));
}

void Timer::aSec(const unsigned long elapsed)
{
   Sleep(1000 - elapsed);
}

void Timer::startTime()
{
    const auto limit= begTime + 1440;
   
   for (; Timer::getInstance()->getActualTime() <= limit; Timer::getInstance()->aSec(0), Timer::getInstance()->getTime())
   {
      unsigned long elapsedTime= begTime + unsigned long(difftime(Timer::getInstance()->getActualTime(), begTime));

      if (difftime(Timer::getInstance()->getActualTime(), begTime) > 0)
         elapsedTime= begTime + unsigned long(difftime(Timer::getInstance()->getActualTime(), begTime) * 240);
   }
}

string Timer::formatTime(time_t time)
{
   struct tm* actualTime= localtime(&time);;
   char buffer[80];

   strftime(buffer, 80, "%H:%M %d/%m/%y", actualTime);

   return string(buffer);
}

unsigned long Timer::timeElapsed()
{
   return begTime + unsigned long(difftime(getActualTime(), begTime) * 240);
}

string Timer::getFormattedTime()
{
   return formatTime(timeElapsed());
}
