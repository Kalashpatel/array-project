#include<iostream>
using namespace std;


int main(){
    
    int n;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){

        // spaces
        for(int j = 0; j < i; j++){
            cout << "  ";
        }

        for(int j = 0; j < n - i; j++){
            if((i + j) % 2 == 0){
                cout << 1 << " ";
            }else{
                cout << 0 << " ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}