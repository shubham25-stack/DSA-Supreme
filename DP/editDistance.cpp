// leetcode 72
#include <iostream>
#include <vector>
using namespace std;
int solveUsingRec(string a, string b, int m,int n){
    if(m == a.length()){
        return b.length()-n;
    }
    if(n == b.length()){
        return a.length()-m;
    }
    int ans = 0;
    if(a[m] == b[n]){
        ans = 0 + solveUsingRec(a,b,m+1,n+1);
    }
    else{
        int replace = 1 + solveUsingRec(a,b,m+1,n+1);
        int insert = 1 + solveUsingRec(a,b,m,n+1);
        int remove1 = 1 + solveUsingRec(a,b,m+1,n);
        ans = min(insert,min(replace,remove1));
    }
    return ans;
}
int solveUsingMem(string a, string b, int m, int n, vector<vector<int>> &dp){
    if(m == a.length()){
        return b.length()-n;
    }
    if(n == b.length()){
        return a.length()-m;
    }
    if(dp[m][n] != -1){
        return dp[m][n];
    }
    int ans = 0;
    if(a[m] == b[n]){
        ans = 0 + solveUsingMem(a,b,m+1,n+1,dp);
    }
    else{
        int replace = 1 + solveUsingMem(a,b,m+1,n+1,dp);
        int insert = 1 + solveUsingMem(a,b,m,n+1,dp);
        int remove1 = 1 + solveUsingMem(a,b,m+1,n,dp);
        ans = min(insert,min(replace,remove1));
    }
    dp[m][n] = ans;
    return dp[m][n];
}

int solveUsingTab(string a, string b){
    vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, -1));
    for(int col = 0; col<= b.length(); col++){
        dp[a.length()][col] = b.length() - col;
    }
    for(int row =0; row<=a.length(); row++){
        dp[row][b.length()] = a.length()-row;
    }
    for(int i=a.length()-1; i>=0; i--){
        for(int j=b.length()-1; j>=0; j--){
            int ans =0;
            if(a[i] == b[j]){
                ans = 0 + dp[i+1][j+1];
            }
            else{
                int replace = 1 + dp[i+1][j+1];
                int insert = 1 + dp[i][j+1];
                int remove = 1+ dp[i+1][j];
                ans = min(insert,min(remove,replace));
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][0];
}
int main(){
    string a = "horse";
    string b = "ros";
    vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1, -1));
    int ans = solveUsingRec(a,b,0,0);
    cout<<ans<<endl;
    int ans2 = solveUsingMem(a,b,0,0,dp);
    cout<<"using memoization : "<<ans2<<endl;
    int ans3 = solveUsingTab(a,b);
    cout<<"Using tabulation : "<<ans3<<endl;

    return 0;
}