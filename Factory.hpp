#ifndef _FACTORY_HPP_
#define _FACTORY_HPP_

#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

#include "Base.hpp"
#include "Op.cpp"
#include "Rand.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Sub.cpp"
#include "Add.cpp"
#include "Pow.cpp"

using namespace std;

class Base;

class Factory{
    public:
	Factory(){ };
	Base* parse(char** input, int length);

	Base* newNode(char*);
};
#endif //_FACTORY_HPP_
