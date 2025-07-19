#include<iostream>
using namespace std;

// program to count digit of entered number.

int main(){
    
    long int digit = 0, number;

    cout << "Enter the number : ";
    cin >> number;

    if (number == 0) {
        digit = 1;
    } else {
        
        if (number < 0) {
            number = -number;
        }

        while (number != 0) {
            number = number / 10;
            digit++;
        }
    }

    cout << "Total number of digits in given number is : " << digit;
    
    return 0;
}