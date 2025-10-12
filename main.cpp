#include<iostream>
#include "Ascii.h"
#include<string>
#include<cstdlib>
using namespace std;
using namespace ascii;
#include "corebuild.hpp"
#include "alternatebranch.hpp"
string branch;
int main() {
	Ascii font = Ascii(starwar);
	font.print("M E N U");
	cout<<"Choose Your branch From ALT or MAIN: ";
    cin>>branch;
	if (branch == "ALT") {
		Alternatebranch();
	}
	else if (branch == "MAIN") {
		corebuild();
	}
	else if (branch == "exit") {
		exit(5000);
	}
	else {
		cout<<"Invalid";
	}
	return 0;
}

