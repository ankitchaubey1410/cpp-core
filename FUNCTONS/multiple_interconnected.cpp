#include<iostream>
using namespace std;
void usa(){
    cout<<"YOU ARE IN USA!!"<<endl;
    return;
}
void india(){
    cout<<"YOU ARE IN INDIA!!"<<endl;
    usa();
}
int main(){
    cout<<"YOU ARE IN MAIN"<<endl;
    india();
    return 0;
}