#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v1;
    int size;

    cout << "Enter the initial size of vector: ";
    cin >> size;
    v1.resize(size);
    cout << "Enter the elements of vector." << endl;

    for(int i = 0; i < size; i++){
        cout << "Enter " << i + 1 << " element of vector: ";
        cin >> v1[i];
    }
    cout << "You have entered all initial elements of vector." << endl;

    for(int i = 0; i < v1.size(); i++){
        cout << i << " element is: " << v1[i] << endl;
    }

    int choice;

    do{

        cout << "press 1 to enter new element of vector." << endl;
        cout << "press 2 to delete any element of vector." << endl;
        cout << "press 3 to view all element of vector." << endl;
        cout << "press 4 to update an element of vector." << endl;
        cout << "press 0 to exit." << endl;
        cout << "select your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            
            int pos, ele;

            cout << "Enter the position of element you want to enter: ";
            cin >> pos;
            cout << "Enter the element value: ";
            cin >> ele;

            v1.insert((v1.begin() + pos - 1), ele);

            cout << "Element inserted successsfully." << endl;

            break;

        case 2:

            int dpos;

            cout << "Enter the position of element you want to delete: ";
            cin >> dpos;

            v1.erase((v1.begin() + dpos - 1));

            cout << "element deleted successfully." << endl;

            break;
        
        case 3:

            for(int i = 0; i < v1.size(); i++){
                cout << i << " element is: " << v1[i] << endl;
            }

            break;

        case 4:

            int upos, uele;

            cout << "Enter the position of element you want to update: ";
            cin >> upos;
            cout << "Enter the element value: ";
            cin >> uele;

            v1[upos - 1] = uele;

            cout << "Element updated successfully." << endl;

            break;

        default:
            break;
        }

    }while (choice != 0);
    
    

    return 0;
}