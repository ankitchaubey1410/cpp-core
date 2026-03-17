#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    string type;
    int seats; 
};
int main(){
    Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.type = "Sedan";
    c1.seats = 5;

    Car c2;
    c2.name = "Suzuki Swift";
    c2.price = 900000;
    c2.type = "Hatchback";
    c2.seats = 5;

    Car c3;
    c3.name = "Totoya Fortuner";
    c3.price = 3600000;
    c3.type = "SUV";
    c3.seats = 8;
    
    cout<<c1.name<<" "<<c1.price<<" "<<c1.type<<" "<<c1.seats<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.type<<" "<<c2.seats<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.type<<" "<<c3.seats<<endl;

    return 0;
}