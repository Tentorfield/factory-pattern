#ifndef __RAND_HPP__ 
#define __RAND_HPP__

#include "base.hpp"
#include <string>
#include <iostream>

using namespace std;

class Rand : public Base {
      public: 
      	Rand();
      	virtual double evaluate();
      	virtual std::string stringify();
      protected:
      	double val;
      	string str_val;
};

#endif 
