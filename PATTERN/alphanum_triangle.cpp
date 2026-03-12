#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0) {   // odd rows → numbers
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
        }
        else {             // even rows → alphabets
            char ch = 'A';
            for(int j = 1; j <= i; j++) {
                cout << ch;
                ch++;
            }
        }

        cout << endl;
    }

    return 0;
}