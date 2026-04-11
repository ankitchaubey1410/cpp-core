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

    Test operator++(){
        aa = aa + 1;
    }
};
int main(){
    Test t1(5);
    t1.display();
    ++t1;
    cout<<t1.aa;
}