#include<iostream>
using namespace std;
class Marks{
public:
    int math;
    int phys;
    
    Marks(int m,int p){
        math = m;
        phys= p;
    }
    
    void display(){
        cout<<"MATHS = "<<math<<endl;
        cout<<"PHYSICS = "<<phys<<endl;
    }
    
    Marks operator+(Marks x){
        Marks sum (x.math + math ,phys + x.phys); 
        return sum;// x.math = m2.math and math = m1.math
    }
};
int main(){
    Marks m1(10,50);
    Marks m2(40,50);
    Marks m3 = m1 + m2;// calling of a function
    m3.display();
    return 0;
}
