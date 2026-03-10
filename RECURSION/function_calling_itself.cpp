#include<iostream>
using namespace std;
void greet(){
    cout<<"Hey Boss!!"<<endl;
    greet();
}
// replacing the loops called recursion
int main(){
    greet();
    return 0;
}