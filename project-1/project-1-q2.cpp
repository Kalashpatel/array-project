#include<iostream>
using namespace std;

int main(){
    int i, j, r, c;
    cout << "enter the no of rows: ";
    cin >> r;
    cout << "enter the no of columns: ";
    cin >> c;

    int a[r][c];

    cout << "enter the elements of array: " << endl;

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cout << "Enter the element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int maxElement = a[0][0];

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(a[i][j] > maxElement){
                maxElement = a[i][j];
            }
        }
    }
    cout << "Largest element is: " << maxElement;
}