#include <iostream>
using namespace std;

void printArray(int arr[3][3],int row,int col){
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void colWisePrint(int arr[3][3],int row,int col){
    for(int i =0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    // int arr[3][4] = { 
    //     {1,2,3},
    //     {2,4,5},
    //     {5,6,7},
    //     {8,9,5}
    // };

    // int brr[] ={1,2,4,5,6};

    int crr[3][3] = { //in 2d atleast collum size must be entered.
        {1,2,3},
        {5,6,7},
        {9,8,7}
    };

    int row = 3;
    int col = 3;
    printArray(crr,row,col);
    colWisePrint(crr,row,col);

    
    return 0;
}