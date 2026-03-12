#include<iostream>
using namespace std;
void(int a, int b){ // formal parameters
    cout<<a+b;
}
int main(){
    sum(67,99);// actual parameters
    return 0;
}
//void() cannot store,return unlike other return types( int ,float)