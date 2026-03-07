#include<iostream>
using namespace std;
int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n , int r){
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    return a/(b*c);
}
void pascal(int x){
    for (int i = 0; i < x; i++){
        for (int j = 0; j <= i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    pascal(5);
}