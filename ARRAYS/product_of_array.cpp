#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int product = 1;
    for (int i = 0; i < 10; i++){
        product *= arr[i];
    }
    cout<<"sum of all elements in an array is : "<<product;
    return 0;
}