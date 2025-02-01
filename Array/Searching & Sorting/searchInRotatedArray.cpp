#include <iostream>
using namespace std;

int findPivotIndex(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(start == end){
            return start;
        }
        if(arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] < arr[mid - 1]){
            return mid-1;
        }
        else if(arr[start] > arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
} 

int main(){
    int arr[7] = {45,4,7,3,9,2,23};
    int size = 7;

    int pivot = findPivotIndex(arr,size);
    cout<<"Pivot Index is : "<<pivot<<endl;
    return 0;
}