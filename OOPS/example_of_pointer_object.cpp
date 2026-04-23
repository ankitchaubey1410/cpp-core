#include <iostream>
using namespace std;
class Student {
public:
    string name;
    void show() {
        cout << "Name: " << name;
        cout<<endl;
    }
};
int main() {
    Student s1;      
    s1.name = "Ankit";
    Student *ptr = &s1; 
    // ptr->show();
    (*ptr).show();
    Student *ptr2 = new Student;
    ptr2->name = "Rahul";
    (*ptr2).show();
}