#include<iostream>
using namespace std;

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
            sort[k] = temp1[i];
            k++;
            i++;
        }else{
            sort[k] = temp2[j];
            k++;
            j++;
        }
    }

    while (i < size1) {
        sort[k] = temp1[i];
        k++;
        i++;
    }

    while (j < size2) {
        sort[k] = temp2[j];
        k++;
        j++;
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

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array is: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}