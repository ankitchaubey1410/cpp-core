#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    float gpa;

    Student(string n , int r , float g){
        name = n;
        rno = r;
        gpa = g;
    }
};
int main(){
    Student s1("Maki" , 20 , 9.8);
    Student s2 = s1; // Shallow Copy 
    s2.name = "Yuta";

    Student s3(s1); // Copy constructor - Call
    s3.name = "Fushigiro"; // Deep Copy


    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;

    return 0;
}