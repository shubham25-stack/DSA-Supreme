#include <iostream>
#include <limits.h>
using namespace std;

int findMax(int arr[4][4], int row, int col){
    int max = INT_MIN;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
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

int ans = findMax(arr,row,col);
cout<<"The max number is : "<<ans;

    return 0;
}