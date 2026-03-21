#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {99,8,27,55,-1,40,16};
    int mi = arr[0];
    int smi = INT_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i++){
        if (arr[i] < mi){
            mi = arr[i];
        }
    }
    for (int i = 1; i < n; i++){
        if (arr[i] < smi && arr[i] != mi){
            smi = arr[i];
        }
    }
    cout<<"first minimum element in an array : "<<mi<<endl;
    cout<<"second minimum element in an array : "<<smi<<endl;
    return 0;
}