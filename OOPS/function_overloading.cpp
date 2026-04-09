// In function overloading no. of parameters are different with same function name y quality of parameter are different.

#include<iostream>
using namespace std;
class Loading{
public:
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    // int sum(int a,int b){ // error
    //     return a+b;
    // }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    Loading a;
    a.sum(69,88);
    a.sum(19,89,67);
    a.sum("Anushka"," Bitch");
}
