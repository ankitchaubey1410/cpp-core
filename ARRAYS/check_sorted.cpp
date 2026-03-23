#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,4,5,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[i - 1] || arr[i] == arr[i - 1]){
            flag = true;
            break;
        }
    }
    if (flag == true) cout<<"sorted"<<endl;
    else cout<<"not sorted"<<endl;
    return 0;
}