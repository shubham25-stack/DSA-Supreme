#include <iostream>
using namespace std;

bool checkSort(int arr[], int size, int index){
    //base case
    if(index>=size){
        return true;
    }
    if(arr[index] > arr[index-1]){
        //aage check kro
        bool aage = checkSort(arr,size,index+1);
        return aage;

    }
    else{
        //sorted nhi h
        return false
    }

}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 6;
    int index = 1;

    bool isSorted = checkSort(arr,size,index);
    if(isSorted){
        cout<<"array is sorted" <<endl;

    }
    else {
        cout<<"Array is not sorted"<<endl;
    }

    return 0;
}