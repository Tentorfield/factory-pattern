#ifndef __SUB_HPP__ 
#define __SUB_HPP__

#include <string>
#include <iostream>

using namespace std;

class Sub : public Base {
      public: 
      	Sub(Base* left, Base* right);
      	virtual double evaluate();
      	virtual std::string stringify();
      protected:
	double left_val;
	double right_val;

	string lhs, rhs;
	string str_val;
	double val;
};

#endif 
