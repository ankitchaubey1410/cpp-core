// class of rectangle for calculating area
#include<iostream>
using namespace std;

class Rectangle{
public:
    float length;
    float breadth;

    float area(){
        return length * breadth;
    }
    float perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r1;
    r1.length = 12;
    r1.breadth = 10;

    cout<<"Area = "<<r1.area()<<endl;

    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    return 0;
}