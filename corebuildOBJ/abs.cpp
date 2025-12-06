#include<iostream>
#include<cmath>
#include "abs.hpp"
using namespace std;
    double absval;
void absfunc() {
   
    cout<<"Value:";
    cin>>absval;
    double res = abs(absval);
    cout <<"Solution:"<<res<<endl;

}

