/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    int N=65;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(N)<<" ";
            N++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    int N=64;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(j+N)<<" ";
        }
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
    int N=64;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<(char)(i+N)<<" ";
        }
        cout<<endl;
    }
    return 0;
}