#include<iostream>
using namespace std;

class Student{
public:
    string name;
    float cgpa;
    int rno;

    Student(){ // Default constructor 
        
    }

    // It is present in class even no constructor is defined by the user but its hidden in code
    // if constructor is defined by the user then default constructor got unable that's why we unable use normal method of initializing values

    // Student(string s , int r , float g){ // Parameterised Constructor 
    Student(string s , int r){ // Parameterised Constructor 
        name = s;
        rno = r;
    }
};
int main(){

    Student s1("reze" , 69 );
    s1.cgpa = 8.8;

    Student s2;
    s2.name = "rika";
    s2.rno = 88;
    s2.cgpa = 7.9;


    
    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rno<<endl;
    
    return 0;
}