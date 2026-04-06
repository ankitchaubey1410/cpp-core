#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<j;
        }
        for (int k = 2 * (n - i); k > 0; k--){
            cout<<" ";
        }
        for (int j = i; j > 0; j--){
            cout<<j;
        }
        cout<<endl;
    }    
    return 0;
}