/*
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
void pascal_triangle(int x){
    for (int i = 0; i < x; i++){
        for (int j = 0; j <= i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    pascal_triangle(n);
    return 0;
}
*/


#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for (int i = 1; i <= x; i++){
        f = f * i;
    }
    return f;
}
int ncr(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for (int i =  0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<ncr(i, j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}