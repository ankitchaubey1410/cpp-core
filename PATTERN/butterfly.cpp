#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        for (int k = 2 * (n - i); k > 0; k--){
            cout<<" ";
        }
        for (int l = i; l > 0; l--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n - 1; i++){
        for (int j = n - i - 1; j > 0; j--){
            cout<<"*";
        }
        for (int k = 1; k <= 2 * (i + 1); k++){
            cout<<" ";
        }
        for (int l = n - i - 1; l > 0; l--){
            cout<<"*";
        }
        cout<<endl;
    }
}