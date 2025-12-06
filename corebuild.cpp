#include<iostream>
#include<string>
#include "Ascii.h"
#include<cstdlib>
using namespace std;
using namespace ascii;
#include "corebuildOBJ/add.hpp"
#include "corebuildOBJ/sub.hpp"
#include "corebuildOBJ/multiply.hpp"
#include "corebuildOBJ/div.hpp"
#include "corebuildOBJ/mod.hpp"
#include "corebuildOBJ/exponents.hpp"
#include "corebuildOBJ/abs.hpp"
string op;


int corebuild() {
	Ascii font = Ascii(starwar);
int x = 3 ;
	//X C A L C  V2
	font.print("X C A L C  V 3");
	cout << "Need help? Type Xhelp!\n";
	cout << "To exit type 'Exit'\n";
	cout <<"All the operators are case sensitive!\n";
	while(x==3) {
	cout << "Operators available '+' , '-' , 'x' , '/' , '%' , '^' , '|'(Main Build) : ";
	cin >> op ;
	if ( op == "Xhelp") { 
		//X H E L P
		font.print("X H E L P");
		cout <<"Youtube : https://www.youtube.com/channel/UCyHc_JOjEzckJ1VX0rCehrQ \n";
		cout <<"Reddit : https://www.reddit.com/user/Visual-Turn2710/ \n";
		cout <<"Github : https://github.com/Ryzen360-official\n";
		cout <<"ChangeLOG : -Added changelog section in command 'Xhelp'\n-Added new logo in Xhelp\n-Added logo\n-Added Exit command\n-Added 'Division by ZERO isn't allowed' text, in / and %\n-Added loop system\n";
		cout <<"'Operator: +=add , -=subtract , x=multiply , /=divide(quotient) , %=divide(remainder) '\n";
	}
	else if ( op == "+" ) {

	    add();

	}
	else if ( op == "-" ) {

		sub();

	}
	else if ( op == "x" ) {

		multiply();

	} 
	else if ( op == "/" ) {

		divide();

	}
	else if ( op == "%" ) {

		mod();
		
	}
	else if (op == "^") {

		expo();

	}
	else if ( op == "|" ) {

		absfunc();

	}

	else if (op == "Exit" ) {
		break;
	}

	else {
		cout << "Invalid Operator(or not implemented yet)\n";
	}
}
			return 0;
}