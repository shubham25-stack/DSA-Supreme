#include <iostream>
using namespace std;

int sumArray(int arr[4][4], int row, int col){
    
    //collumn wise
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum = sum + arr[j][i];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
    //row wise
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){

    int arr[4][4] = {
        {1,2,4,5},
        {90,70,60,40},
        {10,20,30,40},
        {21,32,43,54}
    };

    int row = 4;
    int col = 4;

    sumArray(arr,row,col);
    return 0;
}