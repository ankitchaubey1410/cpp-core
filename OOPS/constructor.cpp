#include<iostream>
using namespace std;

class Student{
public:
    string name;
    float cgpa;
    int rno;

    //Constructor

    Student(string s , int r , float g){
        name = s;
        rno = r;
        cgpa = g; 
    }
};
int main(){

    Student s1("reze" , 69 , 8.1);
    Student s2("rika" , 88 , 7.9);
    
    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rno<<endl;
    
    return 0;
}