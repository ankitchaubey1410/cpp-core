// #include<iostream>
// using namespace std;
// class Test{
// public:
//     int aa;

//     Test(int a){
//         aa = a;
//     }

//     void getdata(){
//         cout<<"value : "<<aa<<endl;
//     }

//     Test operator+=(Test x){
//         aa = aa + x.aa;
//     }
// };
// int main(){
//     Test t1(4);
//     Test t2(5);
//     t1 += t2;
//     t1.getdata();
// }

#include<iostream>
using namespace std;
class Test{
public:
    int aa;

    Test(int a){
        aa = a;
    }

    void getdata(){
        cout<<"NEW DATA : "<<aa<<endl;
    }

    void operator=(Test x){
        aa = x.aa;
    }
    // Test operator=(Test x){
    //     aa = x.aa;
    // }
};
int main(){
    Test t1(69);
    cout<<"OLD DATA : "<<t1.aa<<endl;
    Test t2(999);
    t1 = t2;
    t1.getdata();
}