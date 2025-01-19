#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
int left = 0;
int right = size-1;

//by for loop
for(left = 0;  left <= right; left++,right--){
    swap(arr[left], arr[right]);
}


//by while loop
// while(left<=right){
//     swap(arr[left] , arr[right]);
//     left++;
//     right--;
// }

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
}

int main(){

int arr[6] = {10,40,80,90,50,20};
int size = 6;  
 
reverseArray(arr,size);



    return 0;
}