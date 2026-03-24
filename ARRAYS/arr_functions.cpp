#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 10;
}
// By reference 
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<arr[0]<<endl;
    change(arr); // arrays are pass by reference by default 
    cout<<arr[0]<<endl;
}