#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    
    Student(){
        name = "parul";
        rollno = 39;
    }
    
    Student(string name, int rollno){
        this->name = name;
        this->rollno = rollno;
    }
    
    void showData(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Rollno : "<<this->rollno<<endl;
    }
};
class Marks : public Student{
public:
    int marks;
    
    void getMarks(){
        cout<<"enter the marks : ";
        cin>>marks;
    }
    
    void showMarks(){
        cout<<"Marks : "<<marks<<endl;
    }
};
class Sports : public Student{
public:
    string sport;
    
    void getSport(){
        cout<<"enter the sport : ";
        cin>>sport;
    }
    
    void showSport(){
        cout<<"Sport : "<<sport<<endl;
    }
};
int main(){
    Student s1;
    s1.showData();
    Marks m1;
    m1.getMarks();
    m1.showMarks();
    Sports t1;
    t1.getSport();
    t1.showSport();
    return 0;
}
