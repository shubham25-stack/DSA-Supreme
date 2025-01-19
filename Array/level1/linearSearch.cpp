#include <iostream>
using namespace  std;

int main(){

    int arr[5] = {2,4,5,7,8};
    int target = 7;
    int n = 4; //size of array -1,  arr.size()-1;

    for(int i = 0; i<=n; i++){ //searching starts.
        if(arr[i] == target){
            cout<<"Target found at index : "<<i<<endl;
            break;
        }
        else{
            cout<<"Target not found at index : "<< i <<endl;
        }
    }

    //searching by flags
    bool flag =0;
    for(int i = 0; i<=n; i++){
        if(arr[i] == target){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    return 0;
}