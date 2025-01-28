#include <iostream>
#include <vector>
using namespace std;

vector<int> rowAndMaxOnes(vector<vector<int>>& mat){
    vector<int>ans;
    int n = mat.size();

    int onesCount = INT_MIN;
    int rowNo;

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0; i<mat[i].size(); j++){
            if(mat[i][j] == 1){
                count++;
            }
        }
        if(count > onesCount){
            onesCount = count;
            rowNo = 1;
        }
    }
    ans.push_back(rowNo);
    ans.push_back(onesCount);
    return ans;
}

// int main(){

//     int arr[4][4] = {
//         {1,0,0,0},
//         {0,1,1,0},
//         {0,1,1,0},
//         {1,1,1,0},
//         {0,0,1,0}
//     };

//     int row = 4;
//     int col = 4;

//     return 0;
//}