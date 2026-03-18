#include<iostream>
using namespace std;

class Factory{
public: 
    string name;
    int salary;
    int age;
    string post;

    Factory(){

    }

    Factory(string n){
        name = n;
    }

    Factory(string n , int a , string p){
        name = n;
        age = a;
        post = p;
    }

    Factory(string n , int a , string p , int s){
        name = n;
        age = a;
        post = p;
        salary = s;
    }
   
    Factory(int a , string n , int s , string p){
        name = n;
        age = a;
        post = p;
        salary = s;
    }
    
};

int main(){
    Factory f1("Monica" , 29 , "Manager");
    f1.salary = 49000;
    
    Factory f2;
    f2.name = "Rachel";
    f2.age = 32;
    f2.post = "Assistant";
    f2.salary = 29000;
    
    Factory f3("Pheoby" , 31 , "Maid" , 30000);
    
    Factory f4("Trixie");
    f4.age = 19;
    f4.post = "Intern";
    f4.salary = 15000;
    
    Factory f5(24 , "Jenna" , 16000 , "Intern");


    cout<<f1.name<<" "<<f1.age<<" "<<f1.post<<" "<<f1.salary<<endl;
    cout<<f2.name<<" "<<f2.age<<" "<<f2.post<<" "<<f2.salary<<endl;
    cout<<f3.name<<" "<<f3.age<<" "<<f3.post<<" "<<f3.salary<<endl;
    cout<<f4.name<<" "<<f4.age<<" "<<f4.post<<" "<<f4.salary<<endl;
    cout<<f5.name<<" "<<f5.age<<" "<<f5.post<<" "<<f5.salary<<endl;

    return 0;
}