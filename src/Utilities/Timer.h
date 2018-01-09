#pragma once
#ifndef INCLUDED_TIMER_H
#define INCLUDED_TIMER_H

#include <time.h>
#include <string>

using namespace std;

class Timer 
{
private:
   static Timer* timer;
   time_t actualTime;
   unsigned long begTime;

public:
   Timer();
   ~Timer();

   static Timer* getInstance();
   unsigned long getTime();
   time_t getActualTime() { return actualTime; }

   void aSec(unsigned long elapsed);
   void startTime();
   string formatTime(time_t time);
   unsigned long timeElapsed();
   string getFormattedTime();
};

#endif // !INCLUDED_TIMER_H
