// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     for (int i = 1; i <= n; i++){
//         for (int j = 0; j <= n - i; j++){
//             cout<<(char)(65+j);
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     for (int i = 1; i <= n; i++){
//         for (int j = 0; j <= n - i; j++){
//             cout<<(char)(64+i);
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n - i; j++){
            cout<<(char)(64+num);
            num++;
        }
        cout<<endl;
    }
}