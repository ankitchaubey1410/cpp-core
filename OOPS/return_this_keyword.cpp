#include<iostream>
using namespace std;
class Demo{
public:
    Demo& show(){
        cout<<"Hey little girl!!"<<endl;
        return *this;
    }
};
int main(){
    Demo t;
    t.show().show().show();
}