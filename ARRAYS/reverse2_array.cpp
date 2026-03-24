
/*
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = n - 1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "Reversed array: ";
    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = n - 1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reversed array: ";
    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}