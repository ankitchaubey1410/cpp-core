#include<iostream>
using namespace std;
int main(){
    int arr[] = {-99,-88,-77,-55,-1,0,56};
    int mi = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++){
        if (arr[i] < mi){
            mi = arr[i];
        }
    }
    cout<<"minimum element in an array : "<<mi;
    return 0;
}