#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    int half = power(a, b / 2);
    if (b % 2 == 0)
        return half * half;
    else
        return half * half * a;
}

int main() {
    int x, y;
    cout<<"enter base : ";
    cin>>x;
    cout<<"enter power : ";
    cin>>y;
    cout<<power(x, y);
    
    return 0;
}