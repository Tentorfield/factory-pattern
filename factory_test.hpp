#ifndef FACTORY_TEST_HPP
#define FACTORY_TEST_HPP

#include "gtest/gtest.h"
#include "Factory.cpp"
using namespace std;

TEST(FactoryTest, EvaluateAddition){

    char** expression[] = {"5 + 5"};
    int length = 3;

    Base* test = parse(expression, length); 
    EXPECT_EQ(test->evaluate(), 5);
}
#endif
