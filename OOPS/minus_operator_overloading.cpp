#include<iostream>
using namespace std;
class Test{
public:
    int a;
    int b;

    Test(int aa,int bb){
        a = aa;
        b = bb;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    Test operator-(Test x){
        Test minus(a - x.a,b - x.b);
        return minus;
    }
};
int main(){
    Test t1(7,8);
    Test t2(4,5);
    Test t3 = t1 - t2;
    t3.display();
}
