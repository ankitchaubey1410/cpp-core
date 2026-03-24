#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    // vector<int> arr(n); // By default it will initialize all the elements with 0
    vector<int> arr(n, 7);

    // for (int i = 0; i < n; i++){
    //     cin>>arr[i];
    // }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"size of an array : "<<arr.size()<<endl;
    cout<<"capacity of an array : "<<arr.capacity()<<endl;
    arr.push_back(10);
    cout<<"size of an array : "<<arr.size()<<endl;
    cout<<"capacity of an array : "<<arr.capacity()<<endl; // It will double the capacity of an array when we push an element in an array and the size of an array is equal to the capacity of an array

    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    arr.pop_back(); // It will remove the last element of an array
    cout<<endl;
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}