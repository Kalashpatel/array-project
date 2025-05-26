#include<iostream>
using namespace std;

int main(){


    int i, j, r, c;
    cout << "no of row: ";
    cin >> r;
    cout << "no of column: ";
    cin >> c;

    int a[r][c];

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cout << " enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "entered array: " << endl;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "diagonal elements" << endl;

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            if(i == j || j == c - 1 - i){
                cout << a[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}