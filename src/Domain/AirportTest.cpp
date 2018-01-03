#include "gtest\gtest.h"
#include "Airport.h"
#include "AirportRunway.h"
#include "Airplane.h"

class AirportTest : public ::testing::Test 
{
protected:
   Airplane* airplane;

   virtual void SetUp()
   {
      airplane= new Airplane();
   }

   virtual void TearDown()
   {
      delete airplane;
   }
};

TEST_F(AirportTest, initializingPassengers) {
   cout << airplane->getTotalPassengers() << endl;
   ASSERT_LT(airplane->getTotalPassengers(), 150);
}

TEST_F(AirportTest, generateRandomNumber) {
   ASSERT_LT(airplane->generateRandomNum(1, 99), 100);
}

TEST_F(AirportTest, generateRandomName) {
   cout << airplane->getName() << endl;
   ASSERT_NE("", airplane->getName());
}

