#include<iostream>
using namespace std;
#include "mod.hpp"
int cstnum1,cstnum2;

void mod() {
	cout << "Choose the first NUMBER:";
	cin >> cstnum1 ;
	cout << "Choose the second NUMBER: ";
	cin >> cstnum2 ;
	if (cstnum2 == 0) {
		cout << "Error: Division by Zero is Not Allowed\n";
	}
	else
	cout << "remainder: " << cstnum1%cstnum2 << endl;
	
}