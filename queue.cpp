#include<iostream>
using namespace std;

class Queue 
{

    private:
        int front, rear, count, element, size;
        int *arr;

    public:

        Queue(){

            cout << "Enter the size of queue: ";
            cin >> size;

            arr = new int[size];
            front = -1;
            rear = -1;
            count = 0;
        }
        ~Queue(){
            delete[] arr;
        }
        
        void insertInQueue(){

            cout << "Enter the element: ";
            cin >> element;

            if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[front] = element;
                count++;

                cout << "Element inserted in queue successfully...." << endl << endl;

            }else if(rear < size - 1){
                rear++;
                arr[rear] = element;
                count++;

                cout << "Element inserted in queue successfully...." << endl << endl;

            }else{
                cout << "Queue is full...." << endl << endl;
            }
            
        }

        void deleteFromQueue(){
            if(front == -1 && rear == -1){
                cout << "Queue is empty...." << endl << endl;
            }else{
                
                for(int i = 0; i < rear; i++){
                    arr[front + i] = arr[front + i + 1];
                }
                rear--;
                count--;

                cout << "Element deleted successfully...." << endl << endl;
            }
        }

        void getFront(){

            if(front == -1 && rear == -1){
                cout << "Queue is empty...." << endl << endl;
            }else{
                cout << "Front element of queue is " << arr[front] << endl << endl; 
            }

        }

        void getRear(){

            if(front == -1 && rear == -1){
                cout << "Queue is empty...." << endl << endl;
            }else{
                cout << "Rear element of queue is " << arr[rear] << endl << endl; 
            }

        }

        void fullQueue(){
            if(count == size){
                cout << "Queue is Full......." << endl << endl;
            }else{
                cout << "Queue is not fulll....." << endl << endl;
            } 
        }

        void emptyQueue(){
            if(front == -1 && rear == -1){
                cout << "Queue is Empty......." << endl << endl;
            }else{
                cout << "Queue is not Empty....." << endl << endl;
            } 
        }

        void sizeOfQueue(){
            cout << "Size of Queue is: " << count << endl << endl;
        }

        void display(){
            if(front == -1 && rear == -1){
                cout << "Queue is Empty......." << endl << endl;
            }else{
                cout << "Elements of Queue are: " << endl;

                for(int i = front; i <= rear; i++){
                    cout << arr[i] << endl;
                }
                cout << endl;
            }
        }
};


int main(){

    int choice;

    Queue q;

    do{

        cout << "Queue operations........." << endl;
        cout << "1.Insert element in Queue." << endl;
        cout << "2.Delete element from Queue." << endl;
        cout << "3.View front of Queue." << endl;
        cout << "4.View rear of Queue." << endl;
        cout << "5.Check if Queue is full." << endl;
        cout << "6.Check if Queue is empty." << endl;
        cout << "7.Check size of queue." << endl;
        cout << "8.View all elements of Queue." << endl;
        cout << "0.Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.insertInQueue();
            break;

        case 2:
            q.deleteFromQueue();
            break;

        case 3:
            q.getFront();
            break;

        case 4:
            q.getRear();
            break;

        case 5:
            q.fullQueue();
            break;
        
        case 6:
            q.emptyQueue();
            break;

        case 7:
            q.sizeOfQueue();
            break;

        case 8:
            q.display();
            break;

        case 0:
            
            break;

        default:
            break;
        }

    }while (choice != 0);
    

    return 0;
}