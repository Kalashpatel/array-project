#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100

class Stack 
{

    private:
        int top, count;
        char *ary, *rary;

    public:

        Stack(int size){
            ary = new char[size];
            rary = new char[size];
            top = -1;
            count = 0;
        }
        ~Stack(){
            delete[] ary;
        }
        
        void pushOnStack(char e){
            if(count >= MAX){
                cout << "stack overflow....." << endl << endl;
            }else{
                top++;
                ary[top] = e;
                count++;
                // cout << "element inserted successfully...." << endl;
            }
        }

        void display(){
            if(count == 0){
                cout << "Stack is empty..." << endl;
            }else{
                cout << "your string is : ";
                for(int i = 0; i <= top; i++){
                    cout << ary[i];
                }
            }
        }

        void reverseArray(){

            if(count == 0){
                cout << "original Stack is empty..." << endl;
            }else{
                int j = 0;
                for(int i = top; i >= 0; i--){
                    rary[j] = ary[i];
                    j++;
                }
                cout << endl;
                cout << "reverse string is: ";
                for(int i = 0; i <= top; i++){
                    cout << rary[i];
                }
                cout << endl;
            }

        }

        void checkPalindrome(){

            bool isPalindrome;

            for(int i = 0; i <= top; i++){
                if(ary[i] == rary[i]){
                    isPalindrome = true;
                }
                else{
                    isPalindrome = false;
                }
            }

            if(isPalindrome){
                cout << "Your string is palindrome....." << endl;
            }else{
                cout << "your string is not palindrome...." << endl;
            }
            
        }
};


int main(){

    Stack s(MAX);

    char c[MAX];
    int sizec;

    cout << "Enter the string : ";
    cin >> c;

    sizec = strlen(c);

    for(int i = 0; i < sizec; i++){
        s.pushOnStack(c[i]);
    }
    
    s.display();
    s.reverseArray();
    s.checkPalindrome();

    return 0;
}