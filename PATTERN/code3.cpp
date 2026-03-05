/*
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<(char)(j+65)<<" ";
        }
        cout<<endl;
    }
    return 0;
}