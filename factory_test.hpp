#ifndef FACTORY_TEST_HPP
#define FACTORY_TEST_HPP

#include "gtest/gtest.h"
#include "Factory.cpp"
using namespace std;

/*TEST(FactoryTest, EvaluateAddition){
    string str = "5+5";
    char* expression = new char[str.length() + 1];
    strcpy(expression, str.c_str());
    char** expressionPtr = &expression;
    int length = 3;
	
    Factory* fact = new Factory();	//added
    Base* test = fact->parse(expressionPtr, length); //added
    EXPECT_EQ(test->evaluate(), 5);
}*/

TEST(FactoryTest, Subtract) {
    char* test_val[4]; test_val[0] = "./calculator"; test_val[1] = "5"; test_val[2] = "-" ; test_val[3] = "4";
    Factory* subFactory = new Factory();
    Base* test = subFactory->parse(test_val, 4);
    string testString = test->stringify();
    double testEvaluate = test->evaluate();
    EXPECT_EQ("5 - 4", testString);
    EXPECT_EQ(1, testEvaluate);
}
#endif
