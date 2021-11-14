#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "op.hpp"
#include <iostream>
#include <string>

using namespace std;

class Mult : public Base {
    public:
      	Mult( Base* left, Base* right);
      	virtual double evaluate ();
      	virtual string stringify();
    protected:
    	double left_val;
    	double right_val;
	string lhs;
	string rhs;
};

#endif
