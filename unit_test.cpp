#include "gtest/gtest.h"
#include "Factory.cpp"
#include "factory_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
