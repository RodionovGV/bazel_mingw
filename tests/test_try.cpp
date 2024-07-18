#include "gtest/gtest.h"

#include "info_build.h"

TEST(SimpleTest, test_test) {
  ASSERT_TRUE(1==1);
}

TEST(SimpleTest, test_one) {
  ASSERT_TRUE(1==0);
}

TEST(HardTest, test_one) {
  ASSERT_TRUE(1==1);
}


TEST(HardTest, test_two) {
  ASSERT_TRUE(1==0);
}