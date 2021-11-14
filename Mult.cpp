#include "Mult.hpp"
#include "op.hpp"

Mult::Mult( Base* left, Base* right){
   	this->left_val = left->evaluate();
   	this->right_val = right->evaluate();
   	this->lhs = left->stringify();
   	this->rhs = right->stringify();
}

double Mult::evaluate(){
	return left_val * right_val;			
}

string Mult::stringify(){
	return lhs + " * " + rhs;
}
