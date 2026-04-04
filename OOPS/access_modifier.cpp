#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
// We dont want the user to change a particular data member of class so we store that in private but user can atleast access it but not change it -> getter and setter functions are used for that 
private:
    float marks;
    void display(){
        cout<<"Roll No: "<<rno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
}
int main(){
    Student s1;
      // error: 'name' is a private member of 'Student' as public is not defined and by default it is private in class
    s1.rno = 101;
    s1.name = "Reze";
    s1.marks = 99.99; // It will be private member
    s1.display(); // This also will be private member
    return 0;
}