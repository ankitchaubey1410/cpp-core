#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of x : "<<p<<endl;
    cout<<"Value at that address : "<<*(&x)<<endl;  // dereference or star operator
    cout<<"Value at that address : "<<*p<<endl;
    cout<<"Address of p : "<<&p<<endl;
    return 0;
}