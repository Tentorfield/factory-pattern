#include <iostream>

/*#include "Div.cpp"
#include "Pow.cpp"
#include "Sub.cpp"
#include "Add.cpp"
#include "Base.hpp"
#include "Rand.cpp"
#include "Op.cpp" 
*/
#include "Factory.hpp"
#include "Factory.cpp"
	
using namespace std;

// "Client: only interacts with the AbstractFactory and AbstractProducts
int main(int argv, char** argc) { // main executable

    // char** argc; // takes input (expression) from user
    // int argv; // char length of the expression
    
    Factory* test = new Factory();
    Base* expressionTree;
    expressionTree = test->parse(argc, argv);
    
    if (expressionTree == nullptr){
	cout << "nullptr reached" << endl;
    }

    else{
       cout << "stringify: " << expressionTree->stringify() << "\n" 
            << "evaluate: " << expressionTree->evaluate() << endl;
    }
    //delete test;
    return 0;
}



