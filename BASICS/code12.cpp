#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=a++;//kaam; update
    int c=++a;//update; kaam
    cout<<"b="<<b<<endl;//10
    cout<<"a="<<a<<endl;//12
    cout<<"c="<<c<<endl;//12
    return 0;
}