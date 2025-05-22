#include<iostream>
using namespace std;

int main(){

    int size, pos, ele;
    cout << "enter the size of array: ";
    cin >> size;

    int a[size];
    for(int i = 0; i < size; i++){
        cout << "enter a[" << i << "] : ";
        cin >> a[i];
    }

    int choice;
    do{
        cout << "1.insertion on the array" << endl;
        cout << "2.updating the array" << endl;
        cout << "3.deleting element of the array" << endl;
        cout << "4.viewing the array" << endl;
        cout << "0.Exit" << endl << endl;
        cout << "enter you choice: ";
        cin >> choice;
        cout << endl;

        switch (choice){
        case 1:

            cout << "enter the position: ";
            cin >> pos;
            cout << endl;

            cout << "enter the element: ";
            cin >> ele;
            cout << endl;

            for(int i = size - 1; i >= pos; i--){
                a[i + 1] = a[i];
            }
            size++;
            a[pos] = ele;
            cout << "element inserted successfully" << endl << endl;

            break;
        case 2:
        
            cout << "enter the position: ";
            cin >> pos;
            cout << endl;

            cout << "enter the element: ";
            cin >> ele;
            cout << endl;

            a[pos] = ele;

            cout << "elemnt updated successfully" << endl << endl;
            break;
        case 3:

            cout << "enter the position: ";
            cin >> pos;
            cout << endl;

            for(int i = pos + 1; i <= size; i++){
                a[i - 1] = a[i];
            }
            size--;
            cout << "element deleted successfully" << endl << endl;

            break;
        case 4:

            for(int i = 0; i < size; i++){
                cout << "array element a[" << i << "] is :" << a[i] << endl;
            }
            
            break;
        case 0:
            exit;
            break;
        default:
            cout << "invalid choice entered" << endl << endl;
            break;
        }
    }while(choice != 0);




    return 0;
}
