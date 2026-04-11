#include<iostream>
using namespace std;

int main(){
    int choice;
    while (true){
        cout<<"Menu Driven Program"<<endl;
        cout<<"1. Adding of two numbers"<<endl;
        cout<<"2. Swapping of two numbers"<<endl;
        cout<<"3. Fibbonacci series of a number"<<endl;
        cout<<"4. Factorial of a number"<<endl;
        cout<<"5. Reverse of a number"<<endl;
        cout<<"6. Swapping of two numbers"<<endl;
        cout<<"7. Pascal triangle of a number"<<endl;
        cout<<"8. Permutation of two number"<<endl;
        cout<<"9. Check if a number is prime"<<endl;
        cout<<"10. Count no. of digits in a number"<<endl;
        cout<<"11. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice){
            case 1:
                cout<<"You selected Option 1"<<endl;
                break;
            case 2:
                cout<<"You selected Option 2"<<endl;
                break;
            case 3:
                cout<<"Exiting the program. Goodbye!"<<endl;
                return 0;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
}