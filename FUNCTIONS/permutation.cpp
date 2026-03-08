#include<iostream>
using namespace std;
int permutation(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n , r;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter r : ";
    cin>>r;
    int a = permutation(n);
    int b = permutation(n-r);
    cout<<"Permutation of (n, r) : "<< a/b;
    return 0;
}