#ifndef FACTORY_TEST_HPP
#define FACTORY_TEST_HPP

#include "gtest/gtest.h"
#include "Factory.cpp"
using namespace std;

TEST(FactoryTest, EvaluateAddition){

    char* expression = "5+5";
    char** expressionPtr = &expression;
    int length = 3;

    Factory* factory;
    Base* test = factory->parse(expressionPtr, length); 
    EXPECT_EQ(test->evaluate(), 5);
}
#endif
