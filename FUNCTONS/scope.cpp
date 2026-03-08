#include<iostream>
using namespace std;
int main(){
    // for (int i = 1; i < 6; i++){
    int i;
    for (i = 1; i <= 6; i++){
        cout<<i<<endl;
    }
    return 0;
    // cout<<i;
    // beacause i is not declare outside of for so its boundary are within for loop
    cout<<i;
}