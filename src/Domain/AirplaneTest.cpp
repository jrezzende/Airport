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

TEST_F(AirplaneTest, settingRandomName) {
   ASSERT_EQ("ACS - 100 Sora", airplane->getName());
}

TEST_F(AirplaneTest, initializingPassengers) {
   ASSERT_EQ(0, airplane->getTotalPassengers());
}

