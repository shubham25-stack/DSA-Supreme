#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e) {
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;

    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    int k = s;
    for (int i = 0; i < lenLeft; i++) {
        left[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < lenRight; i++) {
        right[i] = arr[k++];
    }

    int leftIndex = 0, rightIndex = 0, mainArray = s;

    while (leftIndex < lenLeft && rightIndex < lenRight) {
        if (left[leftIndex] < right[rightIndex]) {
            arr[mainArray++] = left[leftIndex++];
        } else {
            arr[mainArray++] = right[rightIndex++];
        }
    }

    while (leftIndex < lenLeft) {
        arr[mainArray++] = left[leftIndex++];
    }

    while (rightIndex < lenRight) {
        arr[mainArray++] = right[rightIndex++];
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e) {
    if (s >= e) return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, mid, e);
}

int main() {
    int arr[] = {2, 1, 4, 5, 7, 8};
    int size = 6;
    
    cout << "Before merge sort: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, size - 1);
    cout << "After merge sort: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//homework merge sort without extra spacing
//important question inversion count
