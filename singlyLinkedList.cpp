#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

};

int main(){

    Node *HEAD = NULL;

    HEAD = new Node();

    HEAD->data = 10;

    Node *n2 = new Node();

    n2->data = 20;
    HEAD->next = n2;
    n2->next = NULL;

    cout << HEAD->data << endl;
    cout << HEAD->next << endl;
    cout << n2->data << endl;
    cout << n2->next << endl;
    cout << n2 << endl;

}
