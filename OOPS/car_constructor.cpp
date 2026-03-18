#include<iostream>
using namespace std;

class Car{
public:
    int price;
    string name;
    int seats;
    string type;

    Car(string n, int p, int s, string t){
        name = n;
        price = p;
        seats = s;
        type = t;
    }
};

int main(){
    Car c1("Kia Sonet" , 6900000 , 8 , "SUV"); // Ordering of initiazing the values must be same as constructor otherwise it will show error
    Car c2("Honda City" , 1900000 , 5 , "Sedan"); 
    Car c3("Suzuki Swift" , 770000 , 5 , "Hatchback"); 
    cout<<c1.name<<" "<<c1.price<<" "<<c1.type<<" "<<c1.seats<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.type<<" "<<c2.seats<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.type<<" "<<c3.seats<<endl;
    return 0;
}