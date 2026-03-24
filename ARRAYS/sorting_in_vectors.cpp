#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    sort(v.begin(), v.end()); // it will sort the vector in ascending order
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverse(v.begin(), v.end()); // it will sort the vector in descending order
    // sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}