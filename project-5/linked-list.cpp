#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

    Node(int e){
        this->data = e;
        this->next = NULL;
    }

};

class linkedList{

    public:
        Node *HEAD;
        int count;
    
        linkedList(){
            this->HEAD = NULL;
            count = 0;
        }

    void insertList(){

        int element;
                    
        cout << "Enter the element: ";
        cin >> element;
        Node *current = new Node(element);
        current->next = this->HEAD;
        HEAD = current;
        count++;
        cout << "Element successfully added at begining of List." << endl << endl;
  
    }
    void updateList(int p){

        Node *ptr = NULL;
        ptr = HEAD;
        if(p < 0 || p > count){
            cout << "Invalid position of element." << endl << endl;
            return;
        }else{
            for(int i = 0; i < p; i++){
                ptr = ptr->next;
            }
            cout << "Element is : " << ptr->data << endl;
        }

    }
    void deleteList(){
            
        int choice, position;
        do{
            cout << "Delete in List." << endl;
            cout << "Press 1 to delete at beginng." << endl;
            cout << "Press 2 to delete at ending." << endl;
            cout << "Press 3 to delete at any position." << endl;
            cout << "Press 0 to exit." << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:{
                
                if(HEAD == NULL || count == 0){
                    cout << "List is empty." << endl;
                }else{
                Node *ptr = HEAD;
                HEAD = HEAD->next;
                ptr = NULL;
                delete ptr;
                cout << "Element deleted successfully." << endl << endl;
                count--;
                }
                
                break;
            }
            case 2:{
                if(HEAD == NULL || count == 0){
                    cout << "List is empty." << endl;
                    
                }else{
                    Node *ptr = HEAD;
                    while (ptr != NULL)
                    {
                        ptr = ptr->next;
                    }
                    delete ptr;
                    ptr = NULL;
                    cout << "Element deleted successfully." << endl << endl;
                    count--;
                }
                break;
            }
            case 3:{
                cout << "Enter the position of element you want to delete: ";
                cin >> position;
                Node *temp = NULL;
                Node *ptr = NULL;
                if(position < 0 || position >count){
                    cout << "Invalid position. " << endl << endl;
                    return;
                }
                if(position == 0){
                    temp = HEAD;
                    HEAD = HEAD->next;
                    delete temp;
                    cout << "Element deleted successfully." << endl << endl;
                    count--;
                }else{
                    ptr = HEAD;
                    for(int i = 1; i < position - 1; i++){
                        ptr = ptr->next;
                    }
                    temp = ptr->next;
                    ptr->next = temp->next;
                    delete temp;
                    cout << "Element deleted successfully." << endl << endl;
                    
                    count--;
                }
                break;
            }
            default:
                break;
            }
        }while (choice != 0);
            
    }
    void viewList(){

        Node *ptr = NULL;
        ptr = HEAD;
        while (ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }

    }
    void reverseList(){

        Node *prev = NULL;
        Node *ptr = HEAD;
        Node *next = NULL;

        while (ptr != NULL) {
            next = ptr->next;   
            ptr->next = prev;   
            prev = ptr;         
            ptr = next;         
        }

        HEAD = prev; 
        cout << "List reversed successfully." << endl << endl;

    }

};

int main(){

    linkedList list;
    int choice, element, position;

    do{

        cout << "linked list." << endl;
        cout << "press 1 to insert element at begining in the list." << endl;
        cout << "press 2 to search an element of the list." << endl;
        cout << "press 3 to delete element of list." << endl;
        cout << "press 4 to view the list." << endl;
        cout << "press 5 to reverse the elements of list." << endl;
        cout << "press 0 to exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

    switch (choice)
    {
    case 1:
  
        list.insertList();
    
        break;

    case 2:

        cout << "Enter the position of element you want to search: ";
        cin >> position;

        list.updateList(position);

        break;

    case 3:

        list.deleteList();

        break;

    case 4:

        list.viewList();
        cout << endl;

        break;

    case 5:

        list.reverseList();
        cout << endl;

        break;


    case 0:

        cout << "Thank you........." << endl << endl;

        break;

    default:

        cout << "invalid choice entered" << endl << endl;

        break;
    }

    }while (choice != 0);
    
    return 0;
}