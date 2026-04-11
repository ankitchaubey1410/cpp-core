#include<iostream>
using namespace std;
class Equality{
public:
    int aa;

    Equality(int a){
        aa = a;
    }

    void display(){
        cout<<"value of aa : "<<aa<<endl;
    }

    Equality operator==(Equality x){
        if(aa == x.aa){
            cout<<"both are equal"<<endl;
        }
        else{
            cout<<"both are not equal"<<endl;
        }
    }
};
int main(){
    Equality e1(5);
    Equality e2(8);
    Equality e3(10);
    e1 == e2;
    e1 == e3;
    return 0;
}