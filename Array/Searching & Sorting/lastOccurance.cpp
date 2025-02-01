#include <iostream>
#include <limits.h>
using namespace std;

int binarySearch(int arr[], int size,int target){

    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2; slow
    int min = INT_MAX;
    int mid = start + (end-start)/2;

    while(start<=end){
    
        if(arr[mid] == target){
            //ans me store kro
            min = mid;
            start = mid+1;
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
   return min;
        
}

int main(){
    int arr[16] = {10,10,20,20,20,30,30,30,30,40,40,50,50,50,60,60};
    int size = 16;
    int target = 30;

    int ansIndex = binarySearch(arr,size,target);

    if(ansIndex == -1){
    cout<<"Element not found "<<endl;
    }
    else{
    cout<<"Element found at index : "<<ansIndex<<endl;
    }
   
    return 0;
}