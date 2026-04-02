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
    cout<<endl;

    vector<int> vec2(4, 0); // vector of size 4 with all elements as 0
    for (int i = 0; i < vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
    
    // Iterators - It is an object which points to an element of a container and has the ability to iterate through the elements of the container.
    // vector<int> :: iterator beginITR = vec.begin();
    // vector<int> :: iterator endITR = vec.end();

    // auto - It is a keyword in C++ that allows the compiler to automatically deduce the type of a variable from its initializer. It is often used with iterators to simplify code and improve readability.
    /*
    auto beginITR = vec.begin();
    auto endITR = vec.end();
    for (vector<int> :: iterator i = beginITR; i < endITR; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    */

    for (auto i : vec){
        cout<< i <<" ";
    }
    cout<<endl;

    // Reverse Iterator
    auto reverseITR = vec.rbegin();
    auto reverseEndITR = vec.rend();
    for (auto i = reverseITR; i < reverseEndITR; i++){
        cout<<*i<<" ";
    }
    cout<<endl;


}
int main(){
    explainvector();
    return 0;
}