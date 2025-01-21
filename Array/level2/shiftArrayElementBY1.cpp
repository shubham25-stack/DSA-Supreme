#include <iostream>
using namespace std;

void shiftArray(int arr[], int size){
    int temp = arr[size-1];

   // ..shifting
    for(int i = size-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

}

int main(){
    
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;   

    shiftArray(arr,size);
    
    //printing
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}