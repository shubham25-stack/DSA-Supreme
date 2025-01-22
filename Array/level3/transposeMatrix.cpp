#include <iostream>
using namespace std;

void beforeTranspose(int arr[4][5],int row,int col){
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void afterTreanspose(int arr[4][5],int row,int col){
    for(int i =0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

// void transpose(int arr[4][5],int row, int col){ //it works only for square matrix
//     for(int i =0; i<row; i++){
//         for(int j = 0; j<col; j++){
//             swap(arr[i][j] , arr[j][i]);
//         }
//     }
// }

int main(){

    int arr[4][5] = {
        {1,2,4,5,6},
        {90,70,60,40,25},
        {10,20,30,40,80},
        {21,32,43,54,99}
    };

    int row = 4;
    int col = 5;

    cout<<"The matrix before transpose : "<<endl;
    beforeTranspose(arr,row,col);
       
    cout<<"The matrix before transpose : "<<endl;
    afterTreanspose(arr,row,col);

    // cout<<"By another method transpose is: "<<endl;
    // transpose(arr,row,col);

    return 0;
}