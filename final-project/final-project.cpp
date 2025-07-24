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

            int choice, element, position;

            do
            {
                cout << "\n ----Insertion in List---- \n" << endl;
                cout << "Press 1 to add at beginng." << endl;
                cout << "Press 2 to add at ending." << endl;
                cout << "Press 3 to add at any position." << endl;
                cout << "Press 0 to exit." << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:{
                    
                    cout << "Enter the element: ";
                    cin >> element;

                    Node *current = new Node(element);
                    current->next = this->HEAD;
                    HEAD = current;
                    count++;

                    cout << "Element successfully added at begining of List." << endl << endl;

                    break;
                }
                case 2:{

                    cout << "Enter the element: ";
                    cin >> element;

                    Node *current = new Node(element);
                    Node *ptr = NULL;
                    ptr = HEAD;

                    if(HEAD == NULL){
                        HEAD = current;
                    }else{
                        while (ptr->next != NULL)
                        {
                            ptr = ptr->next;
                        }
                        ptr->next = current;
                    }
                    count++;

                    cout << endl;
                    cout << "Element successfully added at end of List." << endl << endl;

                    break;
                }
                case 3:{

                    cout << "Enter the element: ";
                    cin >> element;
                    cout << "Enter the position: ";
                    cin >> position;

                    Node *current = new Node(element);
                    Node *ptr = NULL;
                    ptr = HEAD;

                    if(position < 0 || position > count){
                        cout << "Invalid Position entered." << endl;
                        return;
                    }

                    if(position == 0){
                        current->next = HEAD;
                        HEAD = current;
                    } else {
                        ptr = HEAD;
                        for(int i = 0; i < position - 1; i++){
                            ptr = ptr->next;
                        }
                        current->next = ptr->next;
                        ptr->next = current;
                    }
                    count++;

                    cout << "Element successfully added at " << position << " position of List." << endl << endl;

                    break;
                }
                case 0:

                    break;

                default:
                    break;
                }
            } while (choice != 0);
            
        }
        void viewList(){

            Node *ptr = NULL;
            ptr = HEAD;

            if (HEAD == NULL) {
                cout << "List is empty." << endl;
                return;
            }
            while (ptr != NULL)
            {
                cout << ptr->data << endl;
                ptr = ptr->next;
            }

        }
        void updateList(int e, int p){

            Node *ptr = NULL;
            ptr = HEAD;

            if(p < 0 || p >= count){
                cout << "Invalid position of element." << endl << endl;
                return;
            }else{
                for(int i = 0; i < p; i++){
                    ptr = ptr->next;
                }
                ptr->data = e;
            }

        }
        void deleteList(){
            
            int choice, position;

            do{

                cout << "\n ----Delete in List---- \n" << endl;
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
                    delete ptr;

                    cout << "Element deleted successfully." << endl << endl;

                    count--;

                    }
                    
                    break;
                }
                case 2:{

                    if(HEAD == NULL){
                        cout << "List is empty." << endl;
                    } else if (HEAD->next == NULL) {
                        delete HEAD;
                        HEAD = NULL;
                        count--;
                        cout << "Element deleted successfully." << endl << endl;
                    } else {
                        Node *ptr = HEAD;
                        while (ptr->next->next != NULL) {
                            ptr = ptr->next;
                        }
                        delete ptr->next;
                        ptr->next = NULL;
                        count--;
                        cout << "Element deleted successfully." << endl << endl;
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

                        for(int i = 0; i < position - 1; i++){
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
        ~linkedList() {
            Node *current = HEAD;
            while (current != NULL) {
                Node *next = current->next;
                delete current;
                current = next;
            }
        }
};

void merge(int sort[], int low, int mid, int high){
    
    int size1 = (mid - low) + 1;
    int size2 = high - mid;

    int temp1[size1];
    int temp2[size2];

    for(int i = 0; i < size1; i++){
        temp1[i] = sort[low + i];
    }

    for(int i = 0; i < size2; i++){
        temp2[i] = sort[mid + 1 + i];
    }

     int i = 0, j = 0, k = low;

    while (i < size1 && j < size2) {
        if (temp1[i] <= temp2[j]) {
            sort[k++] = temp1[i++];
        }else{
            sort[k++] = temp2[j++];
        }
    }

    while (i < size1) {
        sort[k++] = temp1[i++];
    }

    while (j < size2) {
        sort[k++] = temp2[j++];
    }

}

void merge_sort(int sort[], int low, int high){

    int mid = (low + high) / 2;

    if(low < high){
        merge_sort(sort, low, mid);
        merge_sort(sort, mid + 1, high);
        merge(sort, low, mid, high);
    } 

}

int partition(int arr[], int st, int end){
    int pivot = arr[end], index = st - 1;
    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){
            index++;
            swap(arr[j], arr[index]);
        }
    }
    index++;
    swap(arr[index], arr[end]);

    return index;
}

void quickSort(int arr[], int st, int end){

    if(st < end){
        int pIndex = partition(arr, st, end);
        quickSort(arr, st, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }

}

void printArray(int arr[], int n) {

    cout << "Array is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int low, int high, int k){

    if(low > high){
        return -1;
    }
    
    int mid = low + ((high - low) / 2);

    if(arr[mid] == k){
        return mid;
    }else if(arr[mid] < k){
        return binarySearch(arr, mid + 1, high, k);
    }else{
        return binarySearch(arr, low, mid - 1, k);
    }
    
}

int main(){

    int taskChoice;

    do{

        cout << "\n ----Select the task you want to perform---- \n" << endl;
        cout << "1.Create and Modify Linked List." << endl;
        cout << "2.Sorting and Searching of Array." << endl;
        cout << "0.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> taskChoice;

        switch (taskChoice)
        {
        case 1:{
            
            linkedList list;
            int listChoice, element, position;

            do{
            
            cout << "\n ----operations of singly linked list---- \n" << endl;
            cout << "press 1 to insert element in the list." << endl;
            cout << "press 2 to update the list." << endl;
            cout << "press 3 to delete element of list." << endl;
            cout << "press 4 to view the list." << endl;
            cout << "press 0 to exit." << endl;
            cout << "Enter your choice: ";
            cin >> listChoice;
            cout << endl;
            
            switch (listChoice)
            {
            case 1:
            
                list.insertList();
            
                break;
            
            case 2:
            
                cout << "Enter the element value you want to update: ";
                cin >> element;
                cout << "Enter the position of element you want to update: ";
                cin >> position;
            
                list.updateList(element, position);
            
                cout << "Element successfully updated at " << position << " position of List." << endl << endl;
            
                break;
            
            case 3:
            
                list.deleteList();
            
                break;
            
            case 4:
            
                list.viewList();
                cout << endl;
            
                break;
            
            
            case 0:
            
                cout << "Thank you........." << endl << endl;
            
                break;
            
            default:
            
                cout << "invalid choice entered" << endl << endl;
            
                break;
            }
        
            }while (listChoice != 0);

            break;
        }

        case 2:{

            int arrayChoice, size;

            cout << "Sorting and Searching on Data....." << endl;

            cout << "Enter the size of array: ";
            cin >> size;

            int arr[size];

            cout << "Enter the elements of array....." << endl;

            for(int i = 0; i < size; i++){
                cout << "Enter arr[" << i << "] : ";
                cin >> arr[i];
            }
        
            bool isSorted = false;
        
            do{
                cout << "\n ----array operations---- \n" << endl;
                cout << "1. Sort the Data." << endl;
                cout << "2. Search the Data." << endl;
                cout << "0. Exit." << endl;
                cout << "Select your choice: ";
                cin >> arrayChoice;
            
                switch (arrayChoice)
                {
                case 1:
                
                    int sortChoice;

                    do{
                        cout << "\n ----Choose the Sorting Method---- \n" << endl;
                        cout << "1. Quick Sort." << endl;
                        cout << "2. Merge Sort." << endl;
                        cout << "3. View sorted data." << endl;
                        cout << "0. Exit." << endl;
                        cout << "Select your choice: ";
                        cin >> sortChoice;
                    
                        switch (sortChoice)
                        {
                        case 1:
                            quickSort(arr, 0, size - 1);
                            cout << "Data sorted via Quick sort successfully...." << endl << endl;
                            isSorted = true;
                            break;
                        
                        case 2:
                            merge_sort(arr, 0, size - 1);
                            cout << "Data sorted via merge sort successfully...." << endl << endl;
                            isSorted = true;
                            break;
                        
                        case 3:
                            printArray(arr, size);
                            break;
                        
                        case 0:
                        
                            break;
                        
                        default:
                        
                            cout << "Invalid choice.." << endl << endl;
                        
                            break;
                        }
                    
                    }while (sortChoice != 0);
                
                    break;
                
                case 2:
                        
                    if(!isSorted){
                        merge_sort(arr, 0, size - 1);
                    }
                    int key, ans;
                    cout << "Enter the elemnt you want to search: ";
                    cin >> key;
                
                    ans = binarySearch(arr, 0, size - 1, key);
                
                    if(ans == -1){
                        cout << "Element not found..." << endl << endl;
                    }else{
                        cout << "Index of entered elemnt is: " << ans << endl << endl;
                    }

                    break;
                
                case 0:
                
                    break;
                
                default:
                
                    cout << "Invalid choice..." << endl << endl;
                
                    break;
                }
            
            }while(arrayChoice != 0);
            break;
        }

        case 0:
            cout << "Thank you........" << endl;
            break;

        default:
            cout << "Invalid choice entered...." << endl << endl;
            break;
        }

    }while (taskChoice != 0);
    
    return 0;
}