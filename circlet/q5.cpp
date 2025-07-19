#include<iostream>
using namespace std;


int main(){
    
    int n;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){

        // spaces
        for(int j = n - i - 1; j > 0; j--){
            cout << "  ";
        }

        for(int j = 0; j <= i; j++){
            cout << n - i + j << " ";
        }

        for(int j = 0; j < i; j++){
            cout << n - 1 - j << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}