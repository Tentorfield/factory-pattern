#include <iostream>
#include <vector>
#include <list>

#include "Div.cpp"
#include "Pow.cpp"
#include "Sub.cpp"
#include "Add.cpp"
#include "Base.hpp"
#include "Rand.cpp"
#include "Op.cpp"
//#include "Factory.cpp"
	
using namespace std;

// "Client: only interacts with the AbstractFactory and AbstractProducts
int main(int argv, char** argc) { // main executable

    // char** argc; // takes input (expression) from user
    // int argv; // char length of the expression

    Base* expressionTree;
    expressionTree = parse(argc, argv);

    cout << "stringify: " << expressionTree->stringify() << "\n"
    << "evaluate: " << expressionTree->evaluate() << endl;

    return 0;
}



