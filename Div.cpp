#include "Div.hpp"
#include "op.hpp"

Div::Div( Base* left, Base* right){
   	this->left_val = left->evaluate();
   	this->right_val = right->evaluate();
   	this->lhs = left->stringify();
   	this->rhs = right->stringify();
}

double Div::evaluate(){
	return left_val / right_val;			
}

string Div::stringify(){
	return lhs + " / " + rhs;
}
