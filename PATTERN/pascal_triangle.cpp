#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        int combi = 1;

        for (int j = 0; j <= i; j++){

            cout << combi << " ";
            combi = combi * (i - j) / (j + 1);

            // combination = combination * (n - r)/(r + 1) or combination = n(fact) / (r(fact) * (n-r)(fact))
        }
        cout << endl;
    }
    return 0;
}