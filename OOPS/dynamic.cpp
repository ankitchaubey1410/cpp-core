#include<iostream>
using namespace std;

class Cricketers{
public:
    string name;
    int runs;
    float avg;

    Cricketers(string name , int runs , float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main(){
    // Cricketers c1("Maki" , 99000 , 55.6);
    // Cricketers c2("Mai" , 88000 , 48.7);

    // Dynamic Allocation
    int* ptr = new int(9999); // In runtime memory allocate
    cout<<*ptr<<endl;
    cout<<&(*ptr)<<endl;
    
    return 0;
}