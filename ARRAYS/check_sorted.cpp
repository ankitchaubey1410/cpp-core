#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,4,5,5,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[i - 1]){
            flag = false;
            break;
        }
    }
    if (flag == false) cout<<"not sorted"<<endl;
    else cout<<"sorted"<<endl;
    return 0;
}