// Multiple Calls in Recursion
#include<iostream>
using namespace std;
int fibbonaaci(int x){
    if (x == 1 || x == 2) return 1;
    return fibbonaaci(x - 1) + fibbonaaci(x - 2);
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"Fibbonaaci of "<<n<<" is : "<<fibbonaaci(n)<<endl;
    return 0;
}