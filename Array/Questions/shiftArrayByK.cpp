#include <iostream>
using namespace std;

void shiftArray(int arr[], int size,int shift){
    int temp[];

   // ..shifting
    // for (int i = 0; i < shift; i++) {
    //     temp[i] = arr[size - shift + i];
    // }
    // for (int i = size - 1; i >= shift; i--) {
    //     arr[i] = arr[i - shift];
    // }

    // for (int i = 0; i < shift; i++) {
    //     arr[i] = temp[i];
    // }

    //by modulus
    // int n= size-1;
    
    // for(int index=0; index<n; index++){
    //     int newIndex = (index + k)%n;
    //     temp[newIndex] = arr[index];
    // }

    // arr = temp;
}

int main(){
    
    int arr[6] = {10,20,30,40,50,60};
    //output will be 50,60,10,20,30,40
    int size = 6;   
    //how manny shift we had to do is

    int shift = 2;

    shiftArray(arr,size,shift);
    
    //printing
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}