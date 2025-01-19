#include <iostream>
using namespace std;

void extreme(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left<=right){
        if(left==right){
            cout<<arr[left]<<" ";
        } else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        } 
        left++;
        right--;
    }

   
}

int main(){

    int arr[6] = {10,40,80,90,50,20};
    int size = 6;  
 
    extreme(arr,size);
    return 0;
}