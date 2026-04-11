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
        aa = aa + 1;
    }
    Test operator++(){
        aa = aa + 1;
    }
};
int main(){
    Test t1(5);
    t1.display();
    ++t1; // pre increment
    t1.display();
    t1++; // post increment
    // cout<<t1.aa;
    t1.display();

}