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
    Student(string s , int r){
        name = s;
        rno = r;
    }
};
int main(){

    Student s1("reze" , 69 );
    s1.cgpa = 8.8;
    // s1.rno = 56; // without default constructor it will run


    Student s2; // without default constructor it will not run and error in declaration 
    s2.name = "rika";
    s2.rno = 88;
    s2.cgpa = 7.9;
    
    Student s3;

    
    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.cgpa<<" "<<s3.rno<<endl; // 2.33422e-038 6422204 it will print garbage value and different ones everytime code is executed
    
    return 0;
}