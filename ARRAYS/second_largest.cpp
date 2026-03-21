// Second Largest element in an array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {88,55,64,94,121,1,24,21,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = arr[0];
    int smx = -1;
    for (int i = 1; i < n; i++){
        if (arr[i] > mx){
            mx = arr[i];
        }
    }
    for (int i = 1; i < n; i++){
        if (arr[i] > smx && arr[i] != mx){
            smx = arr[i];
        }
    }
    cout<<"first maximum in an array : "<<mx<<endl;
    cout<<"second maximum in an array : "<<smx<<endl;
    return 0;
}