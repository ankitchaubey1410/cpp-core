#include<iostream>
using namespace std;
int combination(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i; 
    }
    return fact;
}
int main(){
    int n, r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int a = combination(n);
    int b = combination(r);
    int c = combination(n-r);
    cout<<"combination of (n, r) : "<< a/(b*c);
    return 0;
}