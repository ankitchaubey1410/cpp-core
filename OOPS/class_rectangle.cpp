// class of rectangle for calculating area
#include<iostream>
using namespace std;

class Rectangle{
public:
    float length;
    float breadth;

    Rectangle(float l,float b){
        length = l;
        breadth = b;
    }

    float area(){
        return length * breadth;
    }
    float perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r1(10, 12);

    cout<<"Area = "<<r1.area()<<endl;

    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    return 0;
}