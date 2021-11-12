#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

using namespace std;


class Base{
	public:
		Base(){ };
		virtual double evaluate() = 0;
		virtual string stringify() = 0;
};

#endif //BASE_HPP
