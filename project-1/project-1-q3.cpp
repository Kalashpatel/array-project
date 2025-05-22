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

    cout << "Entered array is: " << endl;

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

     cout << "transpose of entered array is: " << endl;

    for(j = 0; j < c; j++){
        for(i = 0; i < r; i++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}