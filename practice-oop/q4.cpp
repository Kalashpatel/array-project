#include <iostream>
using namespace std;

class array{
    int a[5];

    public:
    void set_data(){
        for(int i = 0; i < 5; i++){
            cout << "enter element a[" << i << "]: ";
            cin >> a[i];
        }
        cout << "you have entered all elements" << endl;
    }
    void printArray(){
        cout << "your enteres array: " << endl;
        for(int i = 0; i < 5; i++){
            cout << a[i] << ", ";
        }
        cout << endl << endl;
    }
    void insertion(){
        int ele, pos;
        cout << "enter the position: " ;
        cin >> pos;
        cout << "enter the element: ";
        cin >> ele;

        for(int i = 4; i >= pos; i--){
            a[i + 1] = a[i];
        }
        a[6];
        a[pos] = ele;
        cout << "element inserted successfully" << endl << endl;

        cout << "your array after insertion: " << endl;
        for(int i = 0; i < 6; i++){
            cout << a[i] << ", ";
        }
        cout << endl << endl;
    }
    void deletation(){
        int pos;
        cout << "enter the position: ";
        cin >> pos;

        for(int i = pos + 1; i <= 5; i++){
            a[i - 1] = a[i];
        }
        a[4];

        cout << "element deleted successfully" << endl << endl;

        cout << "your array after deletation: " << endl;
        for(int i = 0; i < 4; i++){
            cout << a[i] << ", ";
        }
        cout << endl << endl;
    }

};

int main(){

    array a1;
    a1.set_data();
    a1.printArray();

    int choice;

    do{

        cout << "press 1 to enter element" << endl;
        cout << "press 2 to delete element" << endl;
        cout << "press 0 to exit" << endl;
        cout << "select your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            
            a1.insertion();  

            break;
        case 2:

            a1.deletation();
            
            break;
        case 0:

            exit;
            break;
        default:
            break;
        }

    }while (choice != 0);
    

    return 0;
}