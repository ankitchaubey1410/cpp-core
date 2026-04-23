#include<iostream>
using namespace std;
class Cosmic{
public:
    int x;
    int y;
    int z;

    Cosmic(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    void display(void){
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
        cout<<"z : "<<z<<endl;
    }   
    void operator-();
};
void Cosmic :: operator-(){
        x=-x;
        y=-y;
        z=-z;
}
int main(){
    Cosmic c(5, -10, 15);
    cout<<"Old values : "<<endl;
    c.display();
    -c;
    cout<<"New values : "<<endl;
    c.display();
    return 0;
}