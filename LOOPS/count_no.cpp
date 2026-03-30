#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if (n == 0) return 1;
    int count = 0;
    while (n > 0){
        n /= 10;
        count++;
    }
    cout<<"number of digits : "<<count<<endl;
    return 0;
}