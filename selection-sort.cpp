#include <iostream>
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

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: " << endl;

    for(int i = 0; i < n; i++){
        cout << "Enter a[" << i << "] : ";
        cin >> arr[i];
    };

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}