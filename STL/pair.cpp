#include<bits/stdc++.h>
using namespace std;
void explainpair(){
    pair<int, int> pr1 = {1, 2};
    cout<<pr1.first<<" "<<pr1.second<<endl;
    pair<int, string> pr2 = {99, "Sweetylemon"};
    cout<<pr2.first<<" "<<pr2.second<<endl;
    pair<int, float> pr3 = make_pair(1, 99.9);
    cout<<pr3.first<<" "<<pr3.second<<endl;
}
int main(){
    explainpair();
    return 0;
}