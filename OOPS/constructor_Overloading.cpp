// Constructor Overloading same as Function Overloading
#include<iostream>
using namespace std;
class Avengers{
public:
    string name;
    int strength;
    string superpower;

    Avengers(string n, int s, string sp){
        name = n;
        strength = s;
        superpower = sp;
    }
    Avengers(string n, string sp){
        name = n;
        superpower = sp;
    }
    Avengers(string n, string sp, int s){
        name = n;
        superpower = sp;
        strength = s;
    }
};
int main(){
    Avengers a1("hulk",999,"super strength");
    Avengers a2("thor","god of thunder");
    Avengers a3("iron man","rich in intelligence",9999);

    cout<<"Name : "<<a1.name<<" "<<"| Strength : "<<a1.strength<<" "<<"| Power : "<<a1.superpower<<endl;
    cout<<"Name : "<<a2.name<<" "<<"| Strength : "<<a2.superpower<<endl;
    cout<<"Name : "<<a3.name<<" "<<"| Strength : "<<a3.strength<<" "<<"| Power : "<<a3.superpower<<endl;
    return 0;
}