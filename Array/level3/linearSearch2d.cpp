#include <iostream>
using namespace std;

bool linearSearch(int arr[4][4], int row,int col,int target){
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
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
    int target = 54;

    int ans = linearSearch(arr,row,col,target);
    
    if(ans == true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}