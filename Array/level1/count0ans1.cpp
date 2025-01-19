#include <iostream>
using namespace std;

void counter(int arr[],int size){
    int zeros =0;
    int ones = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 1){
            ones = ones + 1;
        }
        else{
            zeros = zeros + 1;
        }
    }
    cout<<"Ones are : "<<ones<<endl;
    cout<<"Zeros are : "<<zeros<<endl;
}

int main(){

    int arr[10] = {1,0,1,0,1,0,1,1,1,0};
    int size = 10;
    counter(arr,size);

    return 0;
}