#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int target){

    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2; slow
    int mid = start + (end-start)/2;

    while(start<=end){
    
        if(arr[mid] == target){
            return mid;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        //yaha pe galti ho skti h
        //mid update krna h
        mid = start + (end-start)/2; //fast
    }
    //agr element nhi mila to...
    return -1;
        
}

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    int target = 40;

    int ansIndex = binarySearch(arr,size,target);

    if(ansIndex == -1){
    cout<<"Element not found "<<endl;
    }
    else{
    cout<<"Element found at index : "<<ansIndex<<endl;
    }
   
    return 0;
}