#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialShould, ReturnFactorial) {
  Solution solution;
  int actual = solution.Factorial(5);
  int expected = 120;
  EXPECT_EQ(expected, actual);
}

TEST(FactorialShould, CheckFactorial_0) {
  Solution solution;
  int actual = solution.Factorial(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(FactorialShould, CheckFactorialNegative) {
  Solution solution;
  int actual = solution.Factorial(-3);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(FactorialShould, CheckFactorial_1) {
  Solution solution;
  int actual = solution.Factorial(1);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

