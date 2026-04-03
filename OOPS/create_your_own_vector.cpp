#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr; // Pointer to an array
    Vector(){ // Default Constructor
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int element){ // Passing objects to function
        if (size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for (int i = 0; i < size; i++){
                arr2[i] = arr[i];
            }  
            arr = arr2; // arr stores the address of new array 2 
        }
        arr[size++] = element;
    }
    void print(){
        for (int i = 0; i < size; i++){
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int get(int index){
        if (size == 0){
            cout<<"Array is empty!!"<<endl;
            return -1;
        }
        if (index >= size){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        return arr[index];
    }
    int remove(){
        if (size == 0){
            cout<<"Array is empty!!"<<endl;
            return -1;
        }
        size--;
    }
};
int  main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;
        v.add(10);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
        v.add(11);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
        v.add(12);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
        v.add(13);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;
        v.add(14);
    v.print();
    cout<<v.size<<" "<<v.capacity<<endl;

    cout<<v.get(2)<<endl;
}