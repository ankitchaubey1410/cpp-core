#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; i++){
        sum += arr[i];
    }
    cout<<"sum of all elements in an array is : "<<sum;
    return 0;
}