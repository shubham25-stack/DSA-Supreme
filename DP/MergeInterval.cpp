class Solution {
public:
    int solveUsingRec(int start, int end){
        //base case
        if(start >end){
            return 0;
        }
        if(start == end){
            return 0;
        }
        int ans = INT_MAX;
        for(int i = start; i<=end; i++){
            ans = min(ans,i+max(solveUsingRec(start, i-1), solveUsingRec(i+1, end)));
        }
        return ans;
    }
    int solveUsingMem(int start, int end, vector<vector<int>> &dp){
        if(start >end){
            return 0;
        }
        if(start == end){
            return 0;
        }
        if(dp[start][end] != -1){
            return dp[start][end];
        }
        int ans = INT_MAX;
        for(int i = start; i<=end; i++){
            ans = min(ans,i+max(solveUsingMem(start, i-1,dp), solveUsingMem(i+1, end,dp)));
        }
        dp[start][end]= ans;
        return dp[start][end];
    }
    
    int solveUsingTabulation(int n) {
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    // length of interval
    for(int len = 2; len <= n; len++) {
        for(int start = 1; start + len - 1 <= n; start++) {
            int end = start + len - 1;

            int ans = INT_MAX;

            for(int i = start; i <= end; i++) {
                int left = (i-1 >= start) ? dp[start][i-1] : 0;
                int right = (i+1 <= end) ? dp[i+1][end] : 0;

                int cost = i + max(left, right);

                ans = min(ans, cost);
            }

            dp[start][end] = ans;
        }
    }

    return dp[1][n];
    }

    int getMoneyAmount(int n){
        int start =1;
        int end =n;
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        int ans = solveUsingMem(start,end,dp);
        return ans;
    }
};