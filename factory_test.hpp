#ifndef FACTORY_TEST_HPP
#define FACTORY_TEST_HPP

#include "gtest/gtest.h"
#include "Factory.cpp"
using namespace std;

TEST(FactoryTest, EvaluateAddition){
    string str = "5+5";
    char* expression = new char[str.length() + 1];
    strcpy(expression, str.c_str());
    char** expressionPtr = &expression;
    int length = 3;
	
	Factory fact;	//added
    Base* test = fact.parse(expressionPtr, length); //added
    EXPECT_EQ(test->evaluate(), 5);
}
#endif
