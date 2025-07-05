#include<iostream>
using namespace std;
#define MAX 100

class Stack 
{

    private:
        int top, count;
        int *arr;

    public:

        Stack(int size){
            arr = new int[size];
            top = -1;
            count = 0;
        }
        ~Stack(){
            delete[] arr;
        }
        
        void pushOnStack(int e){
            if(count > MAX){
                cout << "stack overflow....." << endl << endl;
            }else{
                top++;
                arr[top] = e;
                count++;
                // cout << "element inserted successfully...." << endl;
            }
        }

        void display(){
            if(count == 0){
                cout << "Stack is empty..." << endl;
            }else{
                cout << "Binary number is: ";
                for(int i = top; i >= 0; i--){
                    cout << arr[i] << " ";
                }
            }
        }
};


int main(){

    Stack s(MAX);

    int num, mod;

    cout << "Enter the number you want to convert in binary : ";
    cin >> num;

    while (num != 0)
    {
        mod = num % 2;
        num = num / 2;
        s.pushOnStack(mod);
    }
    
    s.display();

    return 0;
}