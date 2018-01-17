#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

int UI::airportLimitOption()
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

int UI::getFirstOption()
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
   std::cout <<  "\t\t\t\t" << "Option 6: Open critical reports options." << std::endl;
   std::cout <<  "\t\t\t\t" << "Option 0: Exit" << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

   std::cin >> option;
   return option;
}

int UI::getSecondOption()
{
   system("cls");

   int option;

   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout << std::setw(65) << "Critical Reports" << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
   std::cout << "\t\t\t\t" << "Option 1: Airplanes on hold greater than 5." << std::endl;
   std::cout << "\t\t\t\t" << "Option 2: Airplanes on ground greater than 70% of its capacity." << std::endl;
   std::cout << "\t\t\t\t" << "Option 3: Airplanes sent to another airports." << std::endl;
   std::cout << "\t\t\t\t" << "Option 4: Pending departure requests above than 5." << std::endl;
   std::cout << "\t\t\t\t" << "Option 5: Back to previous menu." << std::endl;
   std::cout << "\t\t\t\t" << "Option 0: Exit." << std::endl;
   std::cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

   std::cin >> option;
   return option;
}
