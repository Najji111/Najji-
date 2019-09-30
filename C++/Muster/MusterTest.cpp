// Copyright Najji Hendo.

#include <gtest/gtest.h>
#include "./Muster.h"

// ___________________________________________________________________________
TEST(MusterTest, Muster) {
  ASSERT_DOUBLE_EQ(0, Muster(0));
  ASSERT_DOUBLE_EQ(1, Muster(1));
  ASSERT_DOUBLE_EQ(2, Muster(2));
  ASSERT_DOUBLE_EQ(3, Muster(3));
}


// Main programm for executing the tests
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
