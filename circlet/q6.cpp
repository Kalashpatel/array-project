#include<iostream>
using namespace std;


int main(){
    
    int n;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << j + 1 << " ";
        }

        // spaces
        for(int j = 0; j < (2 * n) - (2 * i) - 2; j++){
            cout << "  ";
        }

        for(int j = 0; j <= i; j++){
            cout << i + 1 - j << " ";
        }
        cout << endl;
    }
    
    return 0;
}