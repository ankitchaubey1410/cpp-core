#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++){
        if (arr[i] < arr[i + 1]){
            cout<<"not sorted"<<endl;
            return 0;
        }
    }
    cout<<"sorted"<<endl;
    return 0;
}