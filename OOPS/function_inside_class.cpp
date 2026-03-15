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
    
    // Function inside class
    /*
    void print(){
        // cout<<name<<" "<<runs<<" "<<avg<<endl;
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
    */

    void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl; // Here runs print local value so to avoid this we use this
        cout<<runs<<endl;
    }

    int matches(){
        return runs / avg;
    }
};


int main(){
    Cricketer c1("Virat Kohli" , 25000 , 68.8);
    Cricketer c2("Rohit Sharma" , 18000 , 76.9);
    // c1.name = "Rani Kohli"; 

    c1.print(9) ;
    // cout<<c1.runs<<endl;
    c2.print(6) ;
    
    cout<<"No of matches : "<<c1.matches()<<endl;
    cout<<"No of matches : "<<c2.matches()<<endl;

    return 0;
}