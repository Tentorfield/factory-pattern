#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "op.hpp"
#include <iostream>
#include <string>

using namespace std;

class Div : public Base {
    public:
      	Div( Base* left, Base* right);
      	virtual double evaluate ();
      	virtual string stringify();
    protected:
    	double left_val;
    	double right_val;
	string lhs;
	string rhs;
};

#endif
