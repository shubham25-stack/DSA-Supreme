#include  <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){ //i<size because the indexing starts from 0..
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//linear search function
bool linearSearch(int arr[],int size,int target){  //in boolian if present then 1 or true if absent then 0 or false
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int target = 3;

printArray(arr,size); //calling the function

//linear calling function
bool ans = linearSearch(arr,size,target);
if(ans==1){
    cout<<"Target found"<<endl;
}
else{
    cout<<"Target not found"<<endl;
}

    return 0;
}