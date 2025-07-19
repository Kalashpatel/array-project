#include<iostream>
using namespace std;

// program to show sum of first and last digit of number.

int main(){
    int number, Fdigit, Ldigit;

    cout << "Enter the number: ";
    cin >> number;

    Ldigit = number % 10;

    if(number < 0){
        number = -number;
    }
    
    while(number >= 10){
        number = number / 10;
    }
    Fdigit = number;

    cout << "Sum of First and Last digit of entered number is: " << Fdigit + Ldigit;
    
    return 0;
}