/*
#include<iostream>
using namespace std;
void swap(int x, int y){
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"new values (x : y) = "<<x<<" : "<<y<<endl;
    return;
}
int main(){
    int x, y;
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    cout<<"current values (x : y) = "<<x<<" : "<<y<<endl;
    swap(x, y);
    return 0;
}
*/

// swapping is happenning only inside function not in main() because from main() function is taking copied value not actual value
// Pass by value
/*
#include<iostream>
using namespace std;
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main(){
    int x, y;
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    cout<<"current values (x : y) = "<<x<<" : "<<y<<endl;
    swap(x, y);
    cout<<"new values (x : y) = "<<x<<" : "<<y<<endl;
    return 0;
}
*/

//now function is taking actual values from main 
//Pass by reference
#include<iostream>
using namespace std;
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main(){
    int x, y;
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;
    cout<<"current values (x : y) = "<<x<<" : "<<y<<endl;
    swap(x, y);
    cout<<"new values (x : y) = "<<x<<" : "<<y<<endl;
    return 0;
}