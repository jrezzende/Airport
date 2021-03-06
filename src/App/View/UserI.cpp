#include "UserI.h"
#include "Timer.h"
#include "Model.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

UserI::UserI() : livePrinting(false)
{
}

UserI* UserI::instance= nullptr;

UserI* UserI::getInstance()
{
   if (!instance)
      instance= new UserI();

   return instance;
}

int UserI::airportLimitOption()
{
   int option;

   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

   std::cout << R"(                      \----------------------------------\
                       \                                  \        __
                        \      DEFINE THE MAXIMUM          \       | \
                         >     NUMBER OF AIRPLANES          >------|  \       ______
                        /      ON AIRPORT'S GROUND          /       --- \_____/**|_|_\____  |
                       /                                  /          \_______ --------- __>-}
                      /----------------------------------/              /  \_____|_____/   |
                                                                        *         |
                                                                                 {O}
                    
                           /*\       /*\       /*\       /*\       /*\       /*\       /*\
                          |***|     |***|     |***|     |***|     |***|     |***|     |***|
                           \*/       \*/ ____  \*/       \*/       \*/       \*/       \*/
                            |         |  |  |   |         |         |         |         |
                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////)";

   std::cout << std::setw(65) << "Enter a number: ";
   std::cin >> option;

   return option;
}

int UserI::getOption()
{
   int option;
   
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout << std::setw(65) << Model::getInstance()->getAirport().getAirportName() << " -> General Reports" << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout <<  "\t\t\t\t" << "Option 1: Number of landed planes so far." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 2: Number of planes on the ground." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 3: Number of planes on hold." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 4: Number of total passengers (departure and arrival)." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 5: Wind shift report." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 6: Show critical reports." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 7: Live print mode" << std::endl;
   std::cout << "\t\t\t\t" << "Option 0: Exit" << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

   std::cin >> option;
   system("cls");
   return option;
}

void UserI::invalidOption()
{
   system("cls");
   std::cout << "Invalid Option.\n";
   return;
}

void UserI::livePrintMode()
{
   changePrintMode(1);

   system("cls");

   printEventsOnHold();

   while (true) {
      int stop;
      std::cin >> stop;
      if (stop) {
         changePrintMode(0);
         system("cls");
         break;
      }
   }
}

void UserI::printEventsOnHold()
{
   std::cout << "Type a random number and enter to cancel live print mode" << std::endl << std::endl;

   int totalEvents= eventsOnHold.size();

   for (int i= 0; i < totalEvents; i++)
      std::cout << eventsOnHold.at(i) << std::endl;

   eventsOnHold.clear();
}

void UserI::checkLivePrintMode(std::string text)
{
   if (livePrinting)
      std::cout << text << std::endl;
   else
      eventsOnHold.push_back(text);
}

void UserI::changePrintMode(bool flag)
{
   livePrinting= flag;
}

void UserI::printWindShift(Wind& current)
{
   std::stringstream windshift;
   windshift << "Wind shift detected at " << Timer::getInstance()->getFormattedTime() << ", wind has changed to " << Directions::toString(current.getWindDirection()) << ".\n";
   checkLivePrintMode(windshift.str());
}

void UserI::printAirplaneArrivalRequest(Airplane& airplane)
{
   std::stringstream airplanearrivalrequest;
   airplanearrivalrequest << "Airplane requesting arrival detected at: " << Timer::getInstance()->getFormattedTime() << ", " << airplane.getName() << " from the airline " << airplane.getAirline() << " carrying a total of " << airplane.getTotalPassengers() << " passengers.\n";
   checkLivePrintMode(airplanearrivalrequest.str());
}

void UserI::printPlaneArrival(Airplane& airplane, AirportRunway& runway)
{
   std::stringstream airplanearrival;
   airplanearrival << airplane.getName() << " from the airline: " << airplane.getAirline() << " landed at the airport using the " << Directions::toString(runway.getRunwayDirection()) << " runway at: " << Timer::getInstance()->getFormattedTime() << ".\n";
   checkLivePrintMode(airplanearrival.str());
}

void UserI::printPlaneDepartureRequest(Airplane& airplane)
{
   std::stringstream airplanedeparturerequest;
   airplanedeparturerequest << "Airplane departure request detected at: " << Timer::getInstance()->getFormattedTime() << ", " << airplane.getName() << " from the airline " << airplane.getAirline() << " carrying a total of " << airplane.getTotalPassengers() << " passengers.\n";
   checkLivePrintMode(airplanedeparturerequest.str());
}

void UserI::printPlaneDeparture(Airplane& airplane, AirportRunway& runway)
{
   std::stringstream airplanedeparture;
   airplanedeparture << airplane.getName() << " from the airline: " << airplane.getAirline() << " departed from the airport using the " << Directions::toString(runway.getRunwayDirection()) << " runway at: " << Timer::getInstance()->getFormattedTime() << ".\n";
   checkLivePrintMode(airplanedeparture.str());
}

void UserI::printCriticalAirplaneSentToAnotherAirport(Airplane& airplane)
{
   std::stringstream airplanesenttoanother;
   airplanesenttoanother << "At: " << Timer::getInstance()->getFormattedTime() << " the airplane " << airplane.getName() << " had to be sent to another airport due to airport issues.\n";
   checkLivePrintMode(airplanesenttoanother.str());
}

void UserI::printCriticalOnHoldHigherThanFive()
{
   std::stringstream criticalonhold;
   criticalonhold << "At: " << Timer::getInstance()->getFormattedTime() << " the airport had more than five pending arrival requests.\n";
   checkLivePrintMode(criticalonhold.str());
}

void UserI::printCriticalOnGroundHigherThanSeventyPercent()
{
   std::stringstream criticalonground;
   criticalonground << "At: " << Timer::getInstance()->getFormattedTime() << " the airport had more airplanes on ground than 70% of its total capacity.\n";
   checkLivePrintMode(criticalonground.str());
}

void UserI::printCriticalPendingDepartureRequests()
{
   std::stringstream criticalpendingdeparture;
   criticalpendingdeparture << "At: " << Timer::getInstance()->getFormattedTime() << " the airport had more than five pending departure requests.\n";
   checkLivePrintMode(criticalpendingdeparture.str());
}

void UserI::printReports(std::string report)
{
   system("cls");
   std::cout << report << std::endl;
}
