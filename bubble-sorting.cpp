#include<iostream>
using namespace std;

void bubble_sort(int sort[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(sort[j] > sort[j + 1]){
                int temp = sort[j];
                sort[j] = sort[j + 1];
                sort[j + 1] = temp;
            }
        }
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

    bubble_sort(arr, n);

    cout << "Sorted array is: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}