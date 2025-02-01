#include <iostream>
using namespace std;

int findOddOccurence(int arr[],int size){
int start = 0;
int end = size-1;
int mid = start + (end - start)/2;

while(start<=end){
    //handle single element
    if(start == end){
        return start;
    }

    if(mid & 1){
        if(arr[mid-1] == arr[mid]){
            start = start + 1;
        }
        else{
            end = mid-1;
        }
    }
    else {
        if(arr[mid] == arr[mid+1]){
            start = mid + 2;
        }
        else{
            //mai ya to right ya answer pe khada hu
            end = mid;
        }
    }
    mid = start + (end-start)/2;
}
return -1;
}

int main(){

    int arr[13] = {1,1,2,2,3,3,3,5,5,6,6,9,9};
    int size = 13;

    int ans = findOddOccurence(arr,size);
    cout<<"Odd repeating is: "<<ans<<endl;

    return 0;
}