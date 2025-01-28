//very important question;
//rotate an 2d array matrix to 90 degree...
#include <iostream>
using namespace std;

void transpose(int arr[4][5],int row, int col){ //it works only for square matrix
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
}
//reverse 2d matrix
for(int i =0; i<row; i++){
    reverse(arr[i].begin(),arr[i]end());
}

int main(){

    int arr[4][5] = {
        {1,2,4,5,6},
        {90,70,60,40,25},
        {10,20,30,40,80},
        {21,32,43,54,99}
    };

    int row = 4;
    int col = 5;
    
    //now here we can call the function previously we created
}