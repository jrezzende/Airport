#include "gtest\gtest.h"
#include "Airplane.h"

class AirplaneTest : public ::testing::Test 
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

TEST_F(AirplaneTest, initializingPassengers) {
   cout << airplane->getTotalPassengers() << endl;
   ASSERT_LT(airplane->getTotalPassengers(), 150);
}

TEST_F(AirplaneTest, generateRandomNumber) {
   ASSERT_LT(airplane->generateRandomNum(1, 99), 100);
}

TEST_F(AirplaneTest, generateRandomName) {
   cout << airplane->getName() << endl;
   ASSERT_NE("", airplane->getName());
}

