#include<iostream>
using namespace std;

void insertion_sort(int sort[], int n){
    for(int i = 1; i < n; i++){
        int key = sort[i];
        int j = i - 1;
        while(j >= 0 && sort[j] > key){
            sort[j + 1] = sort[j];
            j--;
        }
        sort[j + 1] = key;
    }
}

int main(){

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: " << endl;

    for(int i = 0; i < n; i++){
        cout << "Enter a[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "array is: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);

    cout << "Sorted array is: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}