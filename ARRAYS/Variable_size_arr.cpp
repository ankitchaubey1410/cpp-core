#include<bits/stdc++.h>
// this contains : #include <iostream>
//               : #include <vector>
//               : #include <algorithm>
//               : #include <map>
//               : #include <set>
//               : #include <cmath>

// #include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}