#include<iostream>
using namespace std;
// class is  a blueprint and objects is a instance  ::  class - Student and s1 and s2 is object
class Student{ // Student is a new datatype
public:
    string name;
    int rno;
    float cgpa;
    // int age;
    // int marks[5];
};
int main(){
    Student s1;
    s1.name = "reze"; // attributes
    // s1.rno = 69;
    s1.cgpa = 8.1;
    cin>>s1.rno;

    Student s2;
    s2.name = "rika";
    s2.rno = 88;
    s2.cgpa = 7.9;

    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rno<<endl;
}