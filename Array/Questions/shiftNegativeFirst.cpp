#include <iostream>
using namespace std;

void shiftArray(int arr[], int size){
int left = 0;
int right = 0;

//by for loop
for(int i =0; i<size; i++){
    if(arr[i]<0){
        swap(arr[right],arr[left]);
        right++;
    }
    left++;
    
}
}

int main(){

    //without using sorting
    int arr[5] = {1,2,-9,-4,5};
    int size = 5;

    shiftArray(arr,size);   
    //printing the array
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}