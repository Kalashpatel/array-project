#include<iostream>
using namespace std;

int main(){
    int i = 0, j = 0, size;
    // negative elements of 1D array
    cout << "printing negative numbers of array" << endl << endl;
    cout << "Enter the size of 1D array: ";
    cin >> size;
    int a[size];

    for(i = 0; i < size; i++){
        cout << "Enter the element of array a[" << i << "]: ";
        cin >> a[i];
    }
    cout << "you have entered all the elements" << endl;

    cout << "negative elements of array are: ";
    for(i = 0; i < size; i++){
        if(a[i] < 0){
            cout << a[i] << ", ";
        }
        else{
            continue;
        }
    } 
}