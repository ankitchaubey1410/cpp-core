#include<iostream>
#include<vector>
using namespace std;
class Scooty{
public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
    // void sound(){
    //     cout<<"Vroom Vroom"<<endl;
    // }
    private:
    int bootSpaace;
};
class Bike : public Scooty{
    public: 
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
class SuperBike : public Scooty{
    public: 
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }
};
int main(){
    // Scooty* b1 = new Bike(); // This Scooty stores the address of Bike and Dynamic allocation
    // b1->sound(); // Vroom Vroom

    // Bike* b1 = new Bike();
    // b1->sound();
    
    // Scooty* s1 = new Scooty();
    // s1->sound();

    Scooty* b = new Bike();
    b->sound();
    Scooty* c = new SuperBike();
    c->sound();
    vector<Scooty*> v;
    v.push_back(b);
    v.push_back(c);
    v[0]->sound();
    v[1]->sound();
}