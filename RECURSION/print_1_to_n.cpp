/*
#include<iostream>
using namespace std;
void print(int x, int n){
    if (x > n) return;
    cout<<x<<endl;
    print(x + 1, n);
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    print(1, n);
    return 0;
}
*/
#include<iostream>
using namespace std;
void print(int n){
    if (n == 0) return; // base case
    print(n - 1); //call
    cout<<n<<endl; //work
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    print(n);
}