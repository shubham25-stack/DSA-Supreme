#include <iostream>
#include <limits.h>
using namespace std;

int firstOccurance(int arr[], int size,int target){

    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2; slow
    int min = INT_MAX;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == target){
            //ans me store kro
            min = mid;
            end = mid-1;
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

int lastOccurance(int arr[], int size,int target){

    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2; slow
    int min = -1;
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

int totalOccurance(int arr[],int size, int target){
    int firstOcc = firstOccurance(arr,size,target);
    int lastOcc = lastOccurance(arr,size,target);
    int total = lastOcc-firstOcc + 1;
    return total;
}

int main(){
    int arr[16] = {10,10,20,20,20,30,30,30,30,40,40,50,50,50,60,60};
    int size = 16;
    int target = 30;

    int f = firstOccurance(arr,size,target);
    int l = lastOccurance(arr,size,target);
    int total = totalOccurance(arr,size,target);

    cout<<"First occurance found at index : "<<f<<endl;
    cout<<"Last occurance found at index : "<<l<<endl;
    cout<<"Total Occurance is : "<<total<<endl;
    
   
    return 0;
}