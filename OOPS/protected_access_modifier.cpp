#include<iostream>
using namespace std;
class Demo{
private:
    int a;
protected: // Only child class can access the protected members of parent class
    int b;
public:
    int c;

    void set(){
        a = 10;
        b = 20;
        c = 30;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};

class Child : public Demo{
public:
    void access(){
        b = 50;
        c = 60;
    }
};

int main(){
    Demo obj1;
    obj1.set();
    obj1.show();
    // obj1.a = 40; // error here a is private member
    // obj1.b = 20; // error here b is protected member
    obj1.c = 0; // no error here c is public member
    cout<<obj1.c<<endl;
    
    Child obj2;
    obj2.access();
    cout<<obj2.c<<endl; // no error here c is public member
    // cout<<obj2.b<<endl; // error here b is protected member
}