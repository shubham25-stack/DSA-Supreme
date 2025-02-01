#include <iostream>
using namespace std;

int peakIndexMountainArray(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid]<arr[mid+1]){
            //peak exist in right
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;

}

int main(){

    int arr[5]={10,20,50,40,30};
    int size = 5;

    int ans = peakIndexMountainArray(arr,size);
    cout<<"The peak element in mountain array is : "<<ans<<endl;

    return 0;
}