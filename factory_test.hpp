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

TEST(FactoryTest, Add) {
    char* test_val[4]; test_val[0] = "./calculator"; test_val[1] = "5"; test_val[2] = "+" ; test_val[3] = "4";
    Factory* subFactory = new Factory();
    Base* test = subFactory->parse(test_val, 4);
    string testString = test->stringify();
    double testEvaluate = test->evaluate();
    EXPECT_EQ("5 + 4", testString);
    EXPECT_EQ(9, testEvaluate);
}

TEST(FactoryTest, Divide) {
    char* test_val[4]; test_val[0] = "./calculator"; test_val[1] = "6"; test_val[2] = "/" ; test_val[3] = "2";
    Factory* subFactory = new Factory();
    Base* test = subFactory->parse(test_val, 4);
    string testString = test->stringify();
    double testEvaluate = test->evaluate();
    EXPECT_EQ("6 / 2", testString);
    EXPECT_EQ(3, testEvaluate);
}

TEST(FactoryTest, Multiply) {
    char* test_val[4]; test_val[0] = "./calculator"; test_val[1] = "5"; test_val[2] = "\*" ; test_val[3] = "4";
    Factory* subFactory = new Factory();
    Base* test = subFactory->parse(test_val, 4);
    string testString = test->stringify();
    double testEvaluate = test->evaluate();
    EXPECT_EQ("5 * 4", testString);
    EXPECT_EQ(20, testEvaluate);
}

TEST(FactoryTest, Pow) {
    char* test_val[4]; test_val[0] = "./calculator"; test_val[1] = "5"; test_val[2] = "\*\*" ; test_val[3] = "2";
    Factory* subFactory = new Factory();
    Base* test = subFactory->parse(test_val, 4);
    string testString = test->stringify();
    double testEvaluate = test->evaluate();
    EXPECT_EQ("5 ** 2", testString);
    EXPECT_EQ(25, testEvaluate);
}

TEST(FactoryTest, All) {
    char* test_val[12]; test_val[0] = "./calculator"; test_val[1] = "5"; test_val[2] = "+" ; test_val[3] = "4"; test_val[4] = "-"; test_val[5] = "7"; test_val[6] = "\*"; test_val[7] = "3"; test_val[8] = "\*\*"; test_val[9] = "2"; test_val[10] = "/"; test_val[11] = "6";
    Factory* subFactory = new Factory();
    Base* test = subFactory->parse(test_val, 12);
    string testString = test->stringify();
    double testEvaluate = test->evaluate();
    EXPECT_EQ("5 + 4 - 7 * 3 ** 2 / 6", testString);
    EXPECT_EQ(6, testEvaluate);
}





#endif
