/*
#include<iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 5;
    cout<<"current values : "<<x<<"  "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<"new values : "<<x<<"  "<<y;
    
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"enter first value : ";
    cin>>x;
    cout<<"enter second value : ";
    cin>>y;
    cout<<"current values (x : y) = "<<x<<" : "<<y<<endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"new values (x : y) = "<<x<<" : "<<y<<endl;
}