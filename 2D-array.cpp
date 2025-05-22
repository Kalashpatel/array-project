#include<iostream>
using namespace std;

int main(){

    int row, col, i, j;
    cout << "Enter the no. of rows in array: ";
    cin >> row;
    cout << "Enter the no. of columns in array: ";
    cin >> col;

    int a[row][col];

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << "enter the element of array a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << "the entered array is: " << endl << endl;

    for(i = 0; i < row; i++){

        for(j = 0; j < col; j++){

            if (i == 0 || i == row - 1 || j == 0 || j == col - 1){
                cout << a[i][j] << "\t";
            } else {
                cout << "\t"; 
            }
        }
        cout << endl << endl;
    }
    cout << endl << endl;


    return 0;
}