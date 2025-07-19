#include<iostream>
using namespace std;


int main(){
    
    int r = 3, c = 5;

    for(int i = 0; i < r; i++){

        for(int j = 0; j < c; j++){

            if(i == 0 || j == 0 || i == r - 1 || j == c - 1){
            cout << "* ";
            }else{
            cout << "  ";
            }

        }

        cout << endl;
    }
    for(int i = 0; i < r - 1; i++){
        cout << "*";
        cout << endl;
    }
    
    return 0;
}