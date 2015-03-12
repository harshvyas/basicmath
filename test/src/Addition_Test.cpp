#include <limits.h>
#include "gtest/gtest.h"
#include "Addition.hpp"

class AdditionTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
  }
};

TEST_F(AdditionTest,twoValues){
    Addition addition;
    std::cout << "[          ] 5+4=9" <<  std::endl;
    EXPECT_EQ(9,addition.twoValues(4,5));
    std::cout << "[          ] 2+3!=6" <<  std::endl;
    EXPECT_NE(6,addition.twoValues(2,3));
}
