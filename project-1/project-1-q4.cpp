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

    int rowSum, colSum, Rsum = 0, Csum = 0;
    cout << "enter row number: ";
    cin >> rowSum;
    cout << "enter column number: ";
    cin >> colSum;

    for(j = 0; j < c; j++){
        Rsum += a[rowSum-1][j];
    }
    cout << "Elements of " << rowSum << " row are: ";
    for(j = 0; j < c; j++){
        cout << a[rowSum-1][j] << " ";
    }
    cout << endl;
    cout << "sum of " << rowSum << " row is: " << Rsum;
    cout << endl << endl << endl;

    for(i = 0; i < r; i++){
         Csum += a[i][colSum-1];
    }
    cout << "Elements of " << colSum << " column are: ";
    for(i = 0; i < r; i++){
        cout << a[i][colSum-1] << " ";
    }
    cout << endl;
    cout << "sum of " << colSum << " column is: " << Csum;
    cout << endl << endl << endl;
}