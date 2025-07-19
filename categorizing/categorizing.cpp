#include<iostream>
using namespace std;

void selectionSort(int sort[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (sort[j] < sort[minIndex])
                minIndex = j;
        }

        if (minIndex != i){
            int temp = sort[i];
            sort[i] = sort[minIndex];
            sort[minIndex] = temp;
        }
            
    }
}

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

void linearSerch(int arr[], int n){
    int key, ans = -1;
    cout << "Enter the elemnt you want to search: ";
    cin >> key;

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            ans = i;
        }
    }

    if(ans == -1){
        cout << "Element not found..." << endl << endl;
    }else{
        cout << "Index of entered elemnt is: " << ans << endl << endl;
    }
    
}

int binarySearch(int arr[], int low, int high, int k){

    if(low > high){
        return -1;
    }
    
    int mid = (low + high) / 2;

    if(arr[mid] == k){
        return mid;
    }else if(arr[mid] < k){
        return binarySearch(arr, mid + 1, high, k);
    }else{
        return binarySearch(arr, 0, mid - 1, k);
    }
    
}

void printArray(int arr[], int n) {

    cout << "Array is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int choice, size;

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

        cout << "1. Sort the Data." << endl;
        cout << "2. Search the Data." << endl;
        cout << "0. Exit." << endl;
        cout << "Select your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            int sortChoice;
            
            do{
                cout << "Choose the Sorting Method...." << endl;
                cout << "1. Selection Sort." << endl;
                cout << "2. Merge Sort." << endl;
                cout << "3. View sorted data." << endl;
                cout << "0. Exit." << endl;
                cout << "Select your choice: ";
                cin >> sortChoice;

                switch (sortChoice)
                {
                case 1:
                    selectionSort(arr, size);
                    cout << "Data sorted via selection sort successfully...." << endl << endl;
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

            int searchChoice;
            
            do{
                cout << "Choose the Search Method...." << endl;
                cout << "1. Linear serching." << endl;
                cout << "2. Binary serching." << endl;
                cout << "0. Exit." << endl;
                cout << "Select your choice: ";
                cin >> searchChoice;

                switch (searchChoice)
                {
                case 1:
                    linearSerch(arr, size);
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

                    cout << "Invalid choice.." << endl << endl;

                    break;
                }

            }while (searchChoice != 0);

            break;

        case 0:

            break;
        
        default:

            cout << "Invalid choice..." << endl << endl;

            break;
        }

    }while(choice != 0);

    return 0;
}