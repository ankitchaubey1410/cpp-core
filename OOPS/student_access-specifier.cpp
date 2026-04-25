#include<iostream>
using namespace std;
class Student{
protected:
    int rollno;

private:
    int marks;
    string password;

public:
    string name;

    Student(string n, int m, string p, int r){
        name = n;
        rollno = r;
        marks = m;
        password = p; 
    }
    void showResult(){
        cout<<"name : "<<name<<endl;
        cout<<"marks : "<<marks<<endl;
    }

    void login(){
        cout<<"password verified successfully!!"<<endl;
    }
};

class Topper : public Student{
public:
    Topper(string n, int m, string p, int r) : Student(n, m, p ,r){ // inline constructor calling constructor while inputing the values
    }

    void showRollno(){
        cout<<"roll no : "<<rollno<<endl;
    }
};
int main(){
    Topper s1("Anushka", 99,"ihateyouanushka1410",56);
    s1.showResult();
    s1.login();
    s1.showRollno();
}