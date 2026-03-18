#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name , int runs){ // gives garbage values
        // name = name; 
        // runs = runs;
        // compiler get confused between constructor name and class name 
        // that's why it become like x = x and garbage values which is already stored in class name get printed 
        
        this->name = name; 
        this->runs = runs;
    
    }
};
int main(){
    Cricketer c1("Virat Kohli" , 25000);
    Cricketer c2("Rohit Sharma" , 18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
    
}