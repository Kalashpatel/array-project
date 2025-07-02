#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

};

int main(){

    Node *HEAD = NULL;
    Node *ptr = NULL;

    HEAD = new Node();

    HEAD->data = 10;

    ptr = HEAD;

    Node *current = new Node();

    current->data = 20;
    HEAD->next = current;

    current = new Node();

    current->data = 30;
    HEAD->next->next = current;

    current = new Node();

    current->data = 40;
    current->next = NULL;
    HEAD->next->next->next = current;

    while (ptr != NULL)
    {
        cout << ptr << endl;
        cout << ptr->data << endl;
        cout << ptr->next << endl;
        cout << "=============" << endl;

        ptr = ptr->next;
    }
    
}