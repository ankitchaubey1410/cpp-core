#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if ( n == 0){
        cout<<"number of digits in "<<n<<" is : 1";
        return 0;
    } else{
        int count = log10(n) + 1;
        cout<<"number of digits in "<<n<<" is : "<<count;
        return 0;
    }
}