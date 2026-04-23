#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name , int runs , float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;

    }
};

void change(Cricketer* c){ // Cricketer& c is pass by reference
    // (*c).avg = 77.2; // it goes to that location where local value is and then changes its original value

    c->avg = 68.9; // (*c).avg = 68.9;

}

int main(){
    Cricketer c1("Virat Kohli" , 25000 , 55.2);
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;
    Cricketer c2("Rohit Sharma" , 18000 , 47.8);

    Cricketer* p2 = &c2;
    cout<<c2.runs<<endl; // 18000
    cout<<(*p2).runs<<endl; // 18000
    cout<<c2.avg<<endl;
    (*p2).avg = 77.5; // c2.avg = 77.5
    cout<<c2.avg<<endl;
    
    Cricketer c3("Shalini Subramaniam" , 99000 , 99.8);
    // // Static Allocation
    Cricketer* p3 = &c3; // In compile time memory allocate
    cout<<p3->runs<<endl; // 99000
    cout<<c3.avg<<endl;
    p3->avg = 55.5; // c3.avg = 55.5
    cout<<c3.avg<<endl;


}