#include<iostream>
using namespace std;
class Car{
public:
    string name[5];
    void getdata(){
        cout<<"enter the names of 5 cars : "<<endl;
        for (int i = 0; i < 5; i++){
            cin>>name[i];
        }
    }
    void showdata(){
        cout<<"the names of 5 cars are : "<<endl;
        for (int i = 0; i < 5; i++){
            cout<<name[i]<<endl;
        }
    }
};
int main(){
    Car c1;
    c1.getdata();
    c1.showdata();
    return 0;
}