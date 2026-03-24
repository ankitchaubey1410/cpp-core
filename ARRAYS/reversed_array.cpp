// Reversing an array

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 5, 9, 7, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Original Array : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array : "<<endl;
    int reversed_arr[n];
    for(int i = 0; i < n; i++){
        reversed_arr[i] = arr[n - 1 - i];
    }
    for(int i = 0; i < n; i++){
        cout<<reversed_arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}