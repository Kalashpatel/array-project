#include<iostream>
using namespace std;


int main(){

    int a, b, c, d;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << "Enter d: ";
    cin >> d;

    if(a > b){
        if(a > c){
            if(a > d){
                cout << "a is max. " << endl; 
            }
            else{
                if(c > d){
                    cout << "c is max. " << endl;
                }
            }
        }
        else{
            if(c > d){
                cout << "c is max." << endl;
            }
        }
    }
    else{
        if(b > c){
            if(b > d){
                cout << "b is max." << endl;
            }
            else{
                if(c > d){
                    cout << "c is max." << endl;
                }
                else{
                    cout << "d is max.";
                }
            }
        }
        else{
            if(c > d){
                cout << "c is max." << endl;
            }
            else{
                cout << "d is max. " << endl;
            }
        }
    }

}