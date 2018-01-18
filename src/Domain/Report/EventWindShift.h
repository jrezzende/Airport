#pragma once
#ifndef INCLUDED_EVENTWINDSHIFT_H
#define INCLUDED_EVENTWINDSHIFT_H

#include "Events.h"
#include "Directions.h"

class EventWindShift : public Events
{
   Directions::Direction newDir;
public:
   EventWindShift(time_t eventTimeValue, Directions::Direction newWindValue);
   ~EventWindShift() = default;
   time_t getEventTime() override;
   std::string eventDescription() override;
};

#endif //INCLUDED_EVENTWINDSHIFT_H
