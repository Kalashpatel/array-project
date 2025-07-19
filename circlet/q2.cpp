#include<iostream>
using namespace std;


int main(){
    
    int n, count = 11;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
    return 0;
}