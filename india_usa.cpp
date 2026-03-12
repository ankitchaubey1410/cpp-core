/*

#include<iostream>
using namespace std;
void usa(){
    cout<<"YOU ARE IN USA!!"<<endl;
    return;//Function get finished as soon as return statement found
}
void india(){
    cout<<"YOU ARE IN INDIA!!"<<endl;
    return;
}
int main(){
    cout<<"YOU ARE IN MAIN"<<endl;
    usa();
    india();
}

*/

#include<iostream>
using namespace std;
void usa(){
    cout<<"YOU ARE IN USA!!"<<endl;
    return;
    cout<<"HEY❤️‍🩹"<<endl;// it will not print because of return
}
int main(){
    usa();
    return 0;
}