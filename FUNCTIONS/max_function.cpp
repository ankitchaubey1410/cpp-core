#include<iostream>
using namespace std;
int maxOfTwo(int x, int y){
    if (x > y) return x;
    else return y;
}
// function can have multiple return statements but at a time of execution of code only one return statement works
int main(){
    cout<<"maximum of two numbers (66, 99) : "<<maxOfTwo(66, 99);
}