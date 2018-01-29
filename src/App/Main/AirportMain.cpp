#pragma once
#ifndef INCLUDED_AIRPORTMAIN_H
#define INCLUDED_AIRPORTMAIN_H

#include "App.h"
#include <crtdbg.h>

void main()
{
   App::getInstance()->start();
}

#endif // INCLUDED_AIRPORTMAIN_H