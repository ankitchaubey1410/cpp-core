#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 8, 10, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isSorted = true;
    for (int i = 0; i < n; i++){
        for (int j =i +1; j < n; j++){
            if (arr[j] < arr[i]){
                isSorted = false;
                break;
            }
        }
    }
    if (isSorted == false){
        cout<<"The array is not sorted in ascending order"<<endl;
    } else{
        cout<<"The array is sorted in ascending order"<<endl;
    }
    return 0;   
} 
