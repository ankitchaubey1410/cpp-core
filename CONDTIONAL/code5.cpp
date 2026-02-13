#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter ch=";
    cin>>ch;
    if((ch>='a')&&(ch<='z')){
        cout<<"ch is lowercase";
    }else if((ch>='A')&&(ch<='Z')){
        cout<<"ch is uppercase";
    }else{
        cout<<"ch is invalid!!";
    }
    return 0;
}