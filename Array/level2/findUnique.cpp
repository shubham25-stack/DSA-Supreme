//by ising xor

#include <iostream>
using namespace std;

int getUnique(int arr[], int n){
    int ans = 0;
    //1st method
    // for(int i = 0; i<n; i++){
    //     ans = ans^ans[i];
    // }

//method 2
    // for(auto x:arr)
    // ans = ans^x;
    return ans;
}

int main(){

    int arr [] = {2,4,10,11,2,4,11};
    int n = 7;

    int finalAns = getUnique(arr,n);
    cout<<"Final Answer is : "<<finalAns<<endl;

    return 0;
}