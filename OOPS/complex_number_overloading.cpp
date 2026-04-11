#include<iostream>
using namespace std;
class Test{
public:
    int i;
    int r;

    Test(int it, int rl){
        i = it;
        r = rl;
    }

    void display(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }

    Test operator+(Test x){
        Test c(0,0);
        c.r = r + x.r;
        c.i = i + x.i;
        return c;
    }
};
int main(){
    Test t1(3, 4);
    Test t2(11, 25);
    Test t3 = t1 + t2;
    t3.display();
    return 0;
}