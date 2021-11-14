#ifndef __ADD_HPP__
#define __ADD_HPP__

#include <string>
#include <iostream>

using namespace std;

class Add : public Base {
      public: 
      	Add(Base* left, Base* right);
      	virtual double evaluate();
      	virtual std::string stringify();
      protected:
	double left_val;
	double right_val;

	string lhs, rhs;
	double val;
};
#endif 
