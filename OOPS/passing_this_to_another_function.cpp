#include <iostream>
using namespace std;
class employee; // Declaration of class employee
void print(employee *e); // Declaration of function which takes pointer to employee class

class employee{
public:
    int salary;
    void show(){
        print(this); // print(&e)
    }
};
void print(employee *e){
    cout<<"Salary is : "<<e->salary<<endl;
}
int main(){
    employee e;
    e.salary=50000;
    e.show();
}