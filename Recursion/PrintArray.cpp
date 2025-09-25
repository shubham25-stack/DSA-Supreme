#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void printArray(int arr[], int size, int index){
    //base case starts
    if(index >= size){
        return;
    }
    //processing if array print
    cout<<arr[index]<<" ";

    //recursive call
    printArray(arr, size, index+1);

    //reverse array
    // cout<<arr[index]<<" ";
}

bool searchArray(int arr[], int size, int index, int key){
    //base case starts
    if(index >= size){
        return false;
    }
    //processing if array print
    if(arr[index] == key){
        return true;
    }

    //recursive call
    return searchArray(arr, size, index+1, key);
}

int findMin(int arr[], int size, int index, int &mini){
    //base case starts
    if(index >= size){
        return mini;
    }
    //processing if array print
    mini = min(mini, arr[index]);


    //recursive call
    return findMin(arr, size, index+1, mini);
}
//tumhe kisi data structure me value ko store krna h and use funcion me pass krr dia make sure ki by reference pass krr rhe ho tum


//solve function store even numbers of array into vector
void solve(int arr[], int size, int index, vector<int> &ans){

    //base case
    if(index >= size){
        return;
    }
    //processing
    if(arr[index] % 2 == 0){
        v.push_back(arr[index]);
    }

    //recursive call
    solve(arr, size, index+1, v);
}

int findMax(int arr[], int size, int index, int &maxi){
    //base case starts
    if(index >= size){
        return maxi;
    }
    //processing if array print
    maxi = max(maxi, arr[index]);
    //recursive call
    return findMax(arr, size, index+1, maxi);

}


int main(){
    int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int size = 5;
    int index = 0;
    int maxi = INT_MIN;
    maxi = findMax(arr, size, index, maxi);
    cout<<"Maximum element in array is: "<<maxi<<endl;

    // int key = 4;
    // cout<<"Target found or not: "<<searchArray(arr, size, index, key)<<endl;
    // printArray(arr, size, index);
    // int mini = INT_MAX;
    // mini = findMin(arr, size, index, mini);
    // cout<<"Minimum element in array is: "<<mini<<endl;

    // vector<int> v;
    // solve(arr, size, index, ans);

    // //printing vector
    // for(int num: ans){
    //     cout<<num<<" ";
    // }

    return 0;
}