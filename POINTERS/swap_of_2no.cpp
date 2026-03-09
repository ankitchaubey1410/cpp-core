#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
//Pass by reference
int main(){
    int x, y;
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    cout<<"current values (x : y) = "<<x<<" : "<<y<<endl;
    swap(&x, &y);
    cout<<"new values (x : y) = "<<x<<" : "<<y<<endl;
    return 0;
}