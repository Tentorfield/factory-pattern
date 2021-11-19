#include "Add.hpp"
#include "Op.hpp"

Add::Add(Base* left, Base* right){
        left_val = left->evaluate();
        right_val = right->evaluate();
	
	lhs = left->stringify();
	rhs = right->stringify();
}

double Add::evaluate(){
	this->val = left_val + right_val;
	return this->val;
}

string Add::stringify(){
        return lhs + " + " + rhs;
}
