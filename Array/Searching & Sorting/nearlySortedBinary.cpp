#include <iostream>
using namespace std;

int nearlySorted(int arr[],int size,int target){
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid-1] == target){
            return mid-1;
        }
        else if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid+1] == target){
            return mid+1;
        }
        
        if(target>arr[mid]){
            start= mid+2;
        }
        else{
            end = mid-2;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    
    int arr[7] = {20,10,30,50,40,70,60};
    int size = 7;
    int target = 40;

    int ans = nearlySorted(arr,size,target);
    cout<<"Found at Index: "<<ans<<endl;

    return 0;
}