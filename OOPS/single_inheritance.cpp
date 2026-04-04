#include<iostream>
using namespace std;
class Scooty{
public:
    int topSpeed;
    float mileage; 
private:
    int bootSpace;
};
class Bike : public Scooty{ // single inheritance -> bike is child class / derived class and scooty is parent class and : it is read as extends
public:
    int gears;
};
int main(){
    Bike b1;
    b1.topSpeed = 120;
    b1.mileage = 45.5;
    b1.gears = 5;
    cout << "Top Speed: " << b1.topSpeed << endl;
    cout << "Mileage: " << b1.mileage << endl;
    cout << "Gears: " << b1.gears << endl;
}