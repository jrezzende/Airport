#include "UserI.h"
#include "Timer.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

UserI::~UserI()
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

   std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout << std::setw(80) << "Define the maximum number planes on the ground." << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

   std::cout << R"(                                     -.                 `|.     
                                     |:\-,              .| \.
                                     |: `.------------------------------------.
                                     / /   o o o o o o o o o o o o o.-.o o   (_`. 
                                    /_ \_              .     .=     |'|         `)  
                                         ``"""""""""""//    /  """"" `"""------"'   
                                                    <//   /_(+   
                                                    //  /      
                                                   // /      
                                                 ----'
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////)";

   
   std::cin >> option;

   return option;
}

int UserI::getOption()
{
   system("cls");

   int option;
   
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout << std::setw(65) << "General Reports" << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout <<  "\t\t\t\t" << "Option 1: Number of landed planes so far." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 2: Number of planes on the ground." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 3: Number of planes on hold and for how long." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 4: Number of total passengers (departure and arrival)." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 5: Wind shift report." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 6: Show critical reports." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 0: Exit" << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

   std::cin >> option;
   return option;
}

void UserI::invalidOption()
{
   system("cls");
   std::cout << "Invalid Option.\n";
}

void UserI::livePrintMode()
{
   system("cls");

   bool flag= true;

   changePrintMode(flag);

   printEventsOnHold();

   while (flag) {
      int stop;
      std::cin >> stop;
      if (stop)
         break;
   }
}

void UserI::printEventsOnHold()
{
   std::cout << "Press 1 and Enter to go back to the reports" << std::endl << std::endl;
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
   windshift << "Wind shift detected at " << Timer::getInstance()->getFormattedTime() << ", wind has changed to " << current.getWindDirection() << ".\n";
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
   airplanearrival << airplane.getName() << " from the airline: " << airplane.getAirline() << " landed at the airport using the " << runway.getRunwayDirection() << " runway at: " << Timer::getInstance()->getFormattedTime() << ".\n";
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
   airplanedeparture << airplane.getName() << " from the airline: " << airplane.getAirline() << " departed from the airport using the " << runway.getRunwayDirection() << " runway at: " << Timer::getInstance()->getFormattedTime() << ".\n";
   checkLivePrintMode(airplanedeparture.str());
}

void UserI::printCriticalAirplaneSentToAnotherAirport(Airplane& airplane)
{
   std::stringstream airplanesenttoanother;
   airplanesenttoanother << airplane.getName() << " had to be sent to another airport due to airport issues at: " << Timer::getInstance()->getFormattedTime() << ".\n";
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
   int op= 0;
   std::cout << "Press 1 and enter to go back" << std::endl << std::endl;
   std::cout << report << std::endl;
   while (!op) {
      std::cin >> op;
   }
}
