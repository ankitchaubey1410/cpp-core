#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a size of square matrix : ";
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i < j){
                arr[i][j] = 0;
            }
            else{
                cout<<"enter elements : ";
                cin>>arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}