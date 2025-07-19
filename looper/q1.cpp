#include<iostream>
using namespace std;

// program to print all alphabet skipping three alphabets.using do while loop.

int main(){
    char ch = 'a';

    do{
        cout << ch << " ";
        ch += 4;
    }while (ch <= 'z');
    
    return 0;
}