#include<iostream>
using namespace std;


void divide() {
	double num1,num2;
	cout << "Choose the first NUMBER:";
	cin >> num1 ;
	cout << "Choose the second NUMBER: ";
	cin >> num2 ;
	if (num2 == 0) {
		cout << "Error: Division by Zero is Not Allowed\n";
	}
	else
	cout << "Quotient: " << num1/num2 << endl;
	
}
