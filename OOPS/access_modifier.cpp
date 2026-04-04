#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    Student(){

    }
    Student(int rno, string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    float getMarks(){ // getter function to access private data member
        return marks;
    }
    void setMarks(float marks){
        this->marks = marks;
    }
// We dont want the user to change a particular data member of class so we store that in private but user can atleast access it but not change it -> getter and setter functions are used for that 
private:
    float marks;
};
int main(){
    Student s1(100, "Denji", 88.09); // marks is private member but we can access it through constructor
    Student s2;
    s2.rno = 101;
    s2.name = "Reze";
    // s2.marks = 99.99; // It will be private member
    cout << "Marks of s1: " << s1.getMarks() << endl;
    s2.setMarks(999.99);
    cout << "Marks of s2: " << s2.getMarks() << endl;

    return 0;
}