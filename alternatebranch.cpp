#include<iostream>
#include<string>
#include "Ascii.h"
#include<cstdlib>
using namespace std;
using namespace ascii;

class Calculator {
	private:
	double num1,num2;

	int cstnum1,cstnum2;

	void getinfo() {
		cout<<"First Number:";
		cin>> num1;
		cout<<"Second Number:";
		cin>>num2;
	}
	void getinfo2() {
		cout<<"First Number:";
		cin>> cstnum1;
		cout<<"Second Number:";
		cin>> cstnum2;
	} 
	public:
	double add() { getinfo(); return num1+num2;}
	double sub() { getinfo(); return num1-num2;}
	double multiply() { getinfo(); return num1*num2;}
	double divide() {
		getinfo();
		if (num2 == 0) { cout<<"Invalid";}
		else {cout<<"Solution: ";}
		return num1/num2;
	}
	int mod() {
		getinfo2();
		if (cstnum2 == 0) {cout<<"Invalid";}
		else {cout<<"Solution: ";}
		return cstnum1%cstnum2;
	}
};

int Alternatebranch() {
	string op;
	Calculator calc;
	int x = 3 ;
	Ascii font = Ascii(starwar);
	font.print("A L T E R N A T  E V2");
	cout << "Need help? Type Xhelp!\n";
	cout << "To exit type 'Exit'\n";
	cout <<"All the operators are case sensitive!\n";
	while(x==3) {
	cout << "Operators available '+' , '-' , 'x' , '/' , '%'(Alternate Build) : ";
	cin >> op ;
	if ( op == "Xhelp") { 
		//X H E L P
		font.print("X H E L P");
		
		cout <<"Youtube : https://www.youtube.com/channel/UCyHc_JOjEzckJ1VX0rCehrQ \n";
		cout <<"Reddit : https://www.reddit.com/user/Visual-Turn2710/ \n";
		cout <<"Github : https://github.com/Ryzen360-official\n";
		cout <<"ChangeLOG :\n -Increased portability but removnig the use of FIGlet Which Made this program system Specific\n -Added changelog section in command 'Xhelp'\n-Added new logo in Xhelp\n-Added logo\n-Added Exit command\n-Added 'Division by ZERO isn't allowed' text, in / and %\n-Added loop system\n";
		cout <<"'Operator: +=add , -=subtract , x=multiply , /=divide(quotient) , %=divide(remainder) '\n";
	}
	else if ( op == "+" ) {

		cout<<calc.add()<<endl;

	}
	else if ( op == "-" ) {

		cout<<calc.sub()<<endl;

	}
	else if ( op == "x" ) {

		cout<<calc.multiply()<<endl;

	} 
	else if ( op == "/" ) {

		cout<<calc.divide()<<endl;

	}
	else if ( op == "%" ) {

		cout<<calc.mod()<<endl;
		
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
