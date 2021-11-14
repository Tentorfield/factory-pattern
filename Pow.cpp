#include "Pow.hpp"
#include "op.hpp"

Pow::Pow( Base* left, Base* right){
	this->left_val = left->evaluate();
	this->right_val = right->evaluate();
	this->lhs = left->stringify();
	this->rhs = right->stringify();
}

double Pow::evaluate(){
	return pow(left_val, right_val);
}

string Pow::stringify(){
	return lhs + " ** " + rhs;
}
