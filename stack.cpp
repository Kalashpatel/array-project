#include<iostream>
using namespace std;

class Stack 
{

    private:
        int top, count, size, element;
        int *arr;

    public:

        Stack(){
            cout << "Enter the size of stack: ";
            cin >> size;
            arr = new int[size];
            top = -1;
            count = 0;
        }
        ~Stack(){
            delete[] arr;
        }
        
        void pushOnStack(){

            cout << "Enter the element: ";
            cin >> element;

            if(count == size){
                cout << "stack overflow....." << endl << endl;
            }else{
                top++;
                arr[top] = element;
                count++;
                cout << "element inserted successfully...." << endl;
            }
        }

        void popFromStack(){

            if(count == 0){
                cout << "stack is empty....." << endl << endl;
            }else{
                top--;
                count--;
                cout << "Element deleted successfully" << endl << endl;
            }
        }

        void getTop(){
            if(count == 0){
                cout << "stack is empty....." << endl << endl;
            }else{
                cout << "Top element of stack is " << arr[top] << endl << endl;
            }
        }

        void fullStack(){
            if(count == size){
                cout << "stack is Full......." << endl << endl;
            }else{
                cout << "stack is not fulll....." << endl << endl;
            } 
        }

        void emptyStack(){
            if(count == 0){
                cout << "stack is Empty......." << endl << endl;
            }else{
                cout << "stack is not Empty....." << endl << endl;
            } 
        }

        void display(){
            if(count == 0){
                cout << "Stack is empty..." << endl;
            }else{
                cout << "Elements of stack are: ";
                for(int i = top; i >= 0; i--){
                    cout << arr[i] << " ";
                }
            }
        }
};


int main(){

    Stack s;

    int choice;

    do{

        cout << "Stack operations........." << endl;
        cout << "1.Insert element in Stack." << endl;
        cout << "2.Delete element from Stack." << endl;
        cout << "3.View top of Stack." << endl;
        cout << "4.Check if Stack is full." << endl;
        cout << "5.Check if Stack is empty." << endl;
        cout << "6.View all elements of Stack." << endl;
        cout << "0.Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.pushOnStack();
            break;

        case 2:
            s.popFromStack();
            break;

        case 3:
            s.getTop();
            break;

        case 4:
            s.fullStack();
            break;

        case 5:
            s.emptyStack();
            break;
        
        case 6:
            s.display();
            break;

        case 0:
            
            break;

        default:
            break;
        }

    }while (choice != 0);
    

    return 0;
}