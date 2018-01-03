#include "gtest\gtest.h"
#include "Airport.h"
#include "Airplane.h"
#include "Wind.h"

int main(int argc, char **argv) {

   Airport *airport= Airport::getInstance();
   Airplane *airplane1= new Airplane();
   Wind *wind = new Wind();
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}