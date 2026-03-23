#include<iostream>
#include<climits> // it is used to get the limits of fundamental data types like int, char, long.
using namespace std;
int main(){
    int arr[6] = {5,15,22,1,-15,94};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i=0; i<6; i++){
        if (arr[i]<smallest){
            smallest = arr[i];
        }
        else if (arr[i]>largest){
            largest = arr[i];
        }
        
    }
    cout<<"smallest : "<<smallest<<endl;
    cout<<"largest : "<<largest<<endl;
    return 0;
}