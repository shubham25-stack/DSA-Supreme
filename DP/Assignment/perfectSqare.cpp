class Solution {
public:
    int solveUsingMem(int n, vector<int>&dp) {
    if (n == 0) return 0;
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = INT_MAX;
    // try all perfect squares
    for (int i = 1; i * i <= n; i++) {
        int square = i * i;
        ans = min(ans, 1 + solveUsingMem(n - square,dp));
    }
    dp[n] = ans;

    return dp[n];
}
    int solveUsingTab(int n){
        vector<int>dp(n+1,INT_MAX);
        dp[0] = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j*j <= i; j++) {
                dp[i] = min(dp[i], 1 + dp[i - j*j]);
            }
        }

    return dp[n];
    }
    int numSquares(int n) {
        //vector<int>dp(n+1,-1);
        return solveUsingTab(n);
    }
};