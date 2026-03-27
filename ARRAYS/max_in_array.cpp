// Maximum element in an array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,85,45,62,12,74,32,69,99};
    int mx = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++){
        if (arr[i] > mx) mx = arr[i]; // (mx < arr[i])
        mx = max(mx,arr[i]);
    }
    cout<<"maximum : "<<mx;
}