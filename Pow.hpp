#ifndef __POW_HPP__
#define __POW_HPP__

#include "op.hpp"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Pow : public Base {
    public:
	Pow( Base* left, Base* right);
	virtual double evaluate ();
	virtual string stringify ();
    protected:
	double left_val;
	double right_val;
	string lhs;
	string rhs;
};

#endif
