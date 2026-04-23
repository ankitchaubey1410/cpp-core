#include<iostream>
using namespace std;
class Test{
public:
    int aa;

    Test(int a){
        aa = a;
    }

    void display(){
        cout<<aa<<endl;
    }

    Test operator++(int){
        aa = aa + 1; return *this;
    }
    Test operator++(){
        aa = aa + 1; return *this;
    }
};
int main(){
    Test t1(5);
    cout<<"Before increment : "<<endl;
    t1.display();
    ++t1; // pre increment
    cout<<"After pre increment : "<<endl;
    t1.display();
    t1++; // post increment
    // cout<<t1.aa;
    cout<<"After post increment : "<<endl;
    t1.display();

}