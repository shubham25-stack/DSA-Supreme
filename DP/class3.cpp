#include <iostream>
#include <vector>
using namespace std;

int solveUsingRec(int n, int k){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return k*k;
    }
    int ans = (solveUsingRec(n-1,k) + solveUsingRec(n-2,k)) *(k-1);
    return ans;
}
//using DP memoization
int solveUsingMem(int n, int k, vector<int>&dp){
    if(n==1){
        return k;
    }
    if(n==2){
        return k*k;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]= (solveUsingMem(n-1,k,dp) + solveUsingMem(n-2,k,dp)) *(k-1);
    return dp[n];
}
long long solveUsingSpaceOptimize(int n, int k) {
    if (n == 1) return k;

    long long prev2 = k;              // f(1)
    long long prev1 = 1LL * k * k;    // f(2)

    for (int i = 3; i <= n; i++) {
        long long curr = (prev1 + prev2) * (k - 1);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main(){
    int n=3;
    int k=3;
    vector<int>dp(n+1,-1);
    int ans = solveUsingMem(n,k,dp);
    cout<<"Ans: "<<ans<<endl;
    return 0;
}