#include<iostream>
using namespace std;
class Car{
public:
    string name;
    int price;
    string type;
    int seats; 
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<endl;
}

void change(Car c){
    c.name = "Audi A800";
}

void change2(Car& c){ // Pass by Reference and Shallow Copy
    c.name = "Audi A800";
}

int main(){
    Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.type = "Sedan";
    c1.seats = 5;
    
    print(c1);
    change(c1); // Pass by Value
    print(c1);
    
    print(c2);
    change2(c2); // Pass by Reference
    print(c2);

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
    
    // print(c2);
    // print(c3);

    return 0;
}