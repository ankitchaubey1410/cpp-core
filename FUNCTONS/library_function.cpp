#include<iostream>  //Header file name iostream which is used for input and output
#include<cmath> //Header file name cmake which used for using math operations and in c - <math.h>
using namespace std;
int main(){
    cout<<"sqrt(2) : "<<sqrt(2)<<endl;
    cout<<"cbrt(45) : "<<cbrt(45)<<endl;
    cout<<"pow(2,10) : "<<pow(2,10)<<endl;
    cout<<"min(99,-69) : "<<min(99,-69)<<endl;    // min and max function can be used without <cmake>
    cout<<"max(99,-69) : "<<max(99,-69)<<endl;
    cout << "ceil(4.2) : " << ceil(4.2) << endl;
    cout << "floor(4.8) : " << floor(4.8) << endl;
    cout << "abs(-10) : " << abs(-10) << endl;
    cout << "round(4.5) : " << round(4.5) << endl;

    cout << "sin(60) : " << sin(60) << endl;
    cout << "cos(30) : " << cos(30) << endl;
    cout << "tan(45) : " << tan(45) << endl;

    cout << "log(10) : " << log(10) << endl;
    cout << "log10(100) : " << log10(100) << endl;
    cout << "exp(1) : " << exp(1) << endl;

    cout << "fmod(10,3) : " << fmod(10,3) << endl;

    return 0;
}