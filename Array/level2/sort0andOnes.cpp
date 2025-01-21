//by counting the ones and zeros...

#include <iostream>
using namespace std;

void sortZeroOne(int arr[],int size){
    int zeros =0;
    int ones = 0;

    //count 0 and ones
    for(int i=0; i<size; i++){
        if(arr[i] == 1){
            ones = ones + 1;
        }
        else{
            zeros = zeros + 1;
        }
    }

    //place all zeros and ones
    for(int i=0; i<zeros;i++){
        arr[i]=0;
        
    }
    for(int i = zeros; i<size; i++){
         arr[i] = 1;
    }

    //by while loop easy way
    // int index = 0;
    // while(zeros--){
    //     arr[index] = 0;
    //     index++;
    // }
    // while(ones--){
    //     arr[index] = 1;
    //     index++;
    // }
    
}

int main(){

    int arr[10] = {1,0,0,0,1,0,0,1,1,0};
    int size = 10;
    sortZeroOne(arr,size);

    //printing the array..
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}