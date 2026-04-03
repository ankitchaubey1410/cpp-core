#include<iostream>
using namespace std;
class Cricketer{
public: 
    int runs;
    int wickets;
    int average;
};
class Engineer{
public: 
    int experience;
    string domain;
};
class Psycho : public Engineer, Cricketer{ // multiple inheritance
public:
    string name;
}
int main(){
    Psycho p;
    p.name = "John Doe";
    p.experience = 5;
    p.domain = "Software";
    p.runs = 1000;
    p.wickets = 50;
    p.average = 40;
    
    cout << "Name: " << p.name << endl;
    cout << "Experience: " << p.experience << " years" << endl;
    cout << "Domain: " << p.domain << endl;
    cout << "Runs: " << p.runs << endl;
    cout << "Wickets: " << p.wickets << endl;
    cout << "Average: " << p.average << endl;
    
    return 0;
}