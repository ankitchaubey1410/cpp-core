#include<iostream>
using namespace std;
class Test{
public:
    int x;

    void operator-(){
        x=-x;
    }
};
int main(){
    Test t;
    t.x=5;
    cout<<t.x<<endl;
    -t;
    cout<<t.x<<endl;    
}