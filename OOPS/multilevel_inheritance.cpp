// Parent class with multiple Child classes
#include<iostream>
using namespace std;

class Vehicle{
public:
    int topSpeed;
    float mileage;
    string fuel;
};

class TwoWheeler : public Vehicle{
public:
    
};

class FourWheeler : public Vehicle{
public:
    
};

class Scooty : public TwoWheeler{
public:
    
};

class Bike : public TwoWheeler{
public:
    
};
int main(){
    return 0;
}