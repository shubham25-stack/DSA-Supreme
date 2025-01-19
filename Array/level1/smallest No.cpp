#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int arr[], int size){
    int minAns = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){
    int arr[8] = {5,3,6,67,1,5,3,9};
    int size = 8;

    int ans = findMin(arr,size);
    cout<<ans<<endl;
    return 0;
}