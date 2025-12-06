#include<iostream>
#include<cmath>
using namespace std;
#include "exponents.hpp"
double base,power;

void expo() {
	cout << "Choose the Base:";
	cin >> base ;
	cout << "Choose the Power: ";
	cin >> power ;
	cout<< "Solution: " << pow(base,power) << endl;
}