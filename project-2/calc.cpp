#include<iostream>
using namespace std;

int addition(int a, int b){
    return a + b;
}
int substraction(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
int division(int a, int b){
    return a / b;
}
int modulas(int a, int b){
    return a % b;
}

int main(){

    int a, b, choice;

    do{

        cout << "Press 1 for Addition" << endl;
        cout << "Press 2 for Substraction" << endl;
        cout << "Press 3 for Multiplication" << endl;
        cout << "Press 4 for Division" << endl;
        cout << "Press 5 for Modulas" << endl;
        cout << "Press 0 for Exit" << endl << endl;
        cout << "enter you choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << endl << endl;
            cout << "Addition of both numbers: " << addition(a, b) << endl << endl;
            cout << "**************************************" << endl << endl;

            break;

        case 2:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << endl << endl;
            cout << "Substraction of both numbers: " << substraction(a, b) << endl << endl;
            cout << "**************************************" << endl << endl;

            break;

        case 3:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << endl << endl;
            cout << "Multiplication of both numbers: " << multiply(a, b) << endl << endl;
            cout << "**************************************" << endl << endl;

            break;

        case 4:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << endl << endl;
            cout << "Division of both numbers: " << division(a, b) << endl << endl;
            cout << "**************************************" << endl << endl;

            break;

        case 5:
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            cout << endl << endl;
            cout << "Modulas of both numbers: " << modulas(a, b) << endl << endl;
            cout << "**************************************" << endl << endl;

            break;

        case 0:
            exit;
            break;
        
        default:
            break;
        }

    }while(choice != 0);

    return 0;
}