#include "Rand.hpp"
#include "stdlib.h"
#include <cstddef>
#include "op.hpp"

Rand::Rand(){
       this->val = rand() % 100;
       this->str_val = to_string(val);

}

double Rand::evaluate(){
	return val;
}

string Rand::stringify(){
	str_val = to_string(val);
      	str_val.erase(str_val.find_last_not_of('0') + 1, string::npos);
      	str_val.erase(str_val.find_last_not_of('.') + 1, string::npos);
	
	return str_val;
}
