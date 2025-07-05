#include<iostream>
using namespace std;

// Grade generator using ternary operator

int main(){

    float percentage;
    char grade;

    cout << "Enter your Percentage: ";
    cin >> percentage;

    if(percentage > 100 || percentage < 0){
        cout << "Invalid Percentage..." << endl;
    }else{
        (percentage > 90)
            ? cout << "Your Grade is A1. " 
            : (percentage > 80)
                ? cout << "Your Grde is A2. "
                : (percentage > 70)
                    ? cout << "Your Grde is B1. "
                    : (percentage > 60)
                        ? cout << "Your Grde is B2. "
                        : (percentage > 50)
                            ? cout << "Your Grde is C1. "
                            : (percentage > 40)
                                ? cout << "Your Grde is C2. "
                                : (percentage > 35)
                                    ? cout << "Your Grde is D. "
                                    : cout << "Your Grade is F. ";

        grade = (percentage > 80) ? 'A':
                (percentage > 60) ? 'B':
                (percentage > 40) ? 'C':
                (percentage > 35) ? 'D': 'F';

        switch(grade)
        {
        case 'A':
            cout << "Excellent work!...." << endl;
            break;

        case 'B':
            cout << "Well done!...." << endl;
            break;
        
        case 'C':
            cout << "Good job...." << endl;
            break;

        case 'D':
            cout << "You passed but you can do better..." << endl;
            break;

        case 'F':
            cout << "You failed...." << endl;
            break;

        default:
            break;
        }

    }
    
    if(grade == 'F'){
        cout << "You are not eligible for next level. Try again next time.";
    }else{
        cout << "You are eligible for next level.";
    }

    return 0;
}