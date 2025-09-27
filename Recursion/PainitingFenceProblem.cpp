#include <iostream>
using namespace std;

int paint(int n, int k){
    //basecase
    if(n==1){
        return k;
    }
    if(n==2){
        return k*(k-1);
    }
    int ans = (k-1) *(paint(n-1,k) + paint(n-2,k));
    return ans;
}

int main(){
    int n = 5;
    int k = 5;
    int ans = paint(n,k);
    cout<<ans<< " "<<endl;
    return 0;
}