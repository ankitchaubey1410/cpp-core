// Pairs in STL DSA
// It allows you to store two values together as a single unit.

#include<bits/stdc++.h>
using namespace std;
void explainpair(){
    pair<int, int> pr1 = {1, 2};
    cout<<pr1.first<<" "<<pr1.second<<endl;
    pair<int, string> pr2 = {99, "Sweetylemon"};
    cout<<pr2.first<<" "<<pr2.second<<endl;
    pair<int, float> pr3 = make_pair(1, 99.9);
    cout<<pr3.first<<" "<<pr3.second<<endl;
    // Nested pair which can store multiple data types
    pair<pair<int, string>, char> pr4 = {{99, "WOLVERINE - "}, 'X'};
    cout<<pr4.first.first<<" "<<pr4.first.second<<" "<<pr4.second<<endl;
}
int main(){
    explainpair();
    return 0;
}
