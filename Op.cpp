#include "op.hpp"
#include "stdlib.h"
#include <cstddef> 

        Op::Op(double value){
		val = value;
	}

        double Op::evaluate(){
  		return val;
	}

        string Op::stringify(){
		string_val = to_string(val);
      		string_val.erase(string_val.find_last_not_of('0') + 1, string::npos);
      		string_val.erase(string_val.find_last_not_of('.') + 1, string::npos);
	        return string_val; 	
	}
