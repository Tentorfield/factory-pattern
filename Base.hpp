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
	public: 
		Base* left = nullptr;
		Base* right = nullptr;
		char* value;
};

#endif //BASE_HPP
