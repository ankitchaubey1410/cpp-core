#include<iostream>
using namespace std;
class Sea{
public:
    string name;
    int power;
    string type;
    Sea(){ // Automatic Inline Construtor
        name="Dolphin";
        power=8000;
        type="Mammal";
    }
    Sea(string n, int p): name(n),power(p){
        // Parameterized Inline Constructor
    }
    void display(); // declaration of inline function
    void display1(); // declaration of inline function
    Sea(string n, int p, string t); // declaration of inline constructor
};

void Sea::display(){ // definition of inline function
    cout<<"name : "<<name<<endl;
    cout<<"power : "<<power<<endl;
    cout<<"type : "<<type<<endl;
}
void Sea::display1(){ // definition of inline function
    cout<<"name : "<<name<<endl;
    cout<<"power : "<<power<<endl;
}

inline Sea::Sea(string n, int p, string t): name(n),power(p),type(t){
}
int main(){
    Sea s1;
    s1.display();
    Sea s2("Shark", 10000, "Fish");
    s2.display();
    Sea s3("Whale", 15000);
    s3.display1();
}