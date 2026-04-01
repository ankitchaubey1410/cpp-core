#include<bits/stdc++.h>
using namespace std;
void explainvector(){
    vector<int> vec;
    vec.push_back(-1);
    vec.push_back(99);
    vec.push_back(-14);
    vec.push_back(0);
    // Instead of using push_back you can use emplace_back
    vec.emplace_back(6);
    vec.emplace_back(23);
    vec.emplace_back(88);
    cout<<vec.size()<<endl;

    for (int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }

    vector<int> vec2(4, 0); // vector of size 4 with all elements as 0
    for (int i = 0; i < vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
}
int main(){
    explainvector();
    return 0;
}