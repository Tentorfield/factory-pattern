#include "Factory.hpp"

/*in this lab you will create a factory which can take in user input and generate a correct expression tree, represented by a Base* root node which will be returned to the caller. Your factory should have a single public method Base* parse(char** input, int length). You will need to parse the inputs to generate the corresponding expression tree, and can assume there are no parenthesies and spaces between each number and operator. You also do not need to consider precedence for the operations and can assume they should be executed from left to right. For example, the input 3 + 2 * 6 would result in (3 + 2) * 6 = 30 rather than the normal 3 + (2 * 6) = 15 In the case that the input is invalid you should print an error and return back a nullptr to the caller.*/
/*
Base* Factory::parse(char** input, int length){
	queue<char*> q;
	stack<char*> s;
	string temp;
	
	for (int i = 0; i < length; i++){
		temp = static_cast<string>(input[i]); //convert input to string
		if (isdigit(temp.at(0))){ //https://www.cplusplus.com/reference/cctype/isdigit/	
			q.push(input[i]);
		}
		else if (temp == "*" || temp == "**" || temp == "/" || temp == "+" || temp == "-"){
			s.push(input[i]);
			while (!s.empty()){
				q.push(s.top());
				s.pop();
			}
		}
		else{
			cout << "Error: Invalid Input" << endl;
			return nullptr;
		}
	}
}
*/

Base* Factory::newNode(char* op){ 
	Base* temp;
	temp->left = nullptr;
	temp->right = nullptr;
	temp->value = op;
	return temp;
}

Base* Factory::parse(char** input, int length){
	stack<Base*> s;
	string temp;
	Base* node;

	for (int i = 0; i < length; i++){
		temp = static_cast<string>(input[i]); //convert input to string
		if (isdigit(temp.at(0))){ // returns true if value is an int 0-9
			node = newNode(input[i]);
			s.push(node);
		}
		else if (temp == "*" || temp == "**" || temp == "/" || temp == "+" || temp == "-"){
			node = newNode(input[i]);
			
			// Pop two top nodes 
			Base* tempNode1 = s.top();
			s.pop();
			Base* tempNode2 = s.top();
			s.pop();

			// make them children 
			node->right = tempNode1;
			node->left = tempNode2;

			s.push(node);
		}
		else{
			cout << "Error: Invalid Input" << endl;
			return nullptr;
		}
	}
	delete node;
	node = s.top();
	s.pop();
	return node;
}
