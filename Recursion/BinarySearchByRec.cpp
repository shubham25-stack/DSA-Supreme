#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e,int key){
    //base case
    if(s>e){
        return -1;
    }

    int mid = s +(e-s)/2;    
    if(arr[mid]==key){
        return mid;
    }

    //baki recursion dekhega
    if(arr[mid]<key){
        s=mid+1;
        return binarySearch(arr,s,e,key);
    }
    else {
        //left me jayega
        s=mid-1;
        return binarySearch(arr,s,e,key);
    }


}

int main(){
    
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int s = 0;
    int e = size-1;
    
    int key = 60;

    int found = binarySearch(arr,s,e,key);
    if(found != -1){
        cout<<"Target found at : "<<found<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    return 0;
}