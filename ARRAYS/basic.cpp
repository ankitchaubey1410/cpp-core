#include<iostream>
using namespace std;
int main(){
    // int marks[5] = {99, 100, 54, 36, 88};
    // cout<<"size of array = "<<sizeof(marks)<<endl;

    // int marks[5];
    // indexing from 0 to size-1

    // marks[0] = 101;
    // cout<<marks[0]<<endl;
    // marks[1] = 102;
    // cout<<marks[1]<<endl;

    // double price[] = {98.99, 105.67, 30.00}; // size = 3


    /*
    // loops
    int size = 5;
    for (int i = 0; i < 5; i++){
        cout<<marks[i]<<endl;
    }
    */
    int marks[5];
    for (int i = 0; i < 5; i++){
        cout<<"enter the element at "<<i<<" index : ";
        cin>>marks[i]; 
    }
    
    for (int i = 0; i < 5; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}