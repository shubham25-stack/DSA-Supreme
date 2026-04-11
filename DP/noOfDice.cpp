class Solution {
public:
    int MOD = 1e9 + 7;

    int solveUsingMem(int n, int k, int target, vector<vector<int>>& dp){

        if(n == 0 && target == 0) return 1;
        if(n == 0 || target < 0) return 0;

        if(dp[n][target] != -1){
            return dp[n][target];
        }

        long long ways = 0;

        for(int face = 1; face <= k; face++){
            ways += solveUsingMem(n-1, k, target - face, dp);
        }

        return dp[n][target] = ways % MOD;
    }
    int solveUsingTab(int n, int k, int target) {

        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

        // base case
        dp[0][0] = 1;

        // fill table
        for(int i = 1; i <= n; i++){
            for(int t = 0; t <= target; t++){

                long long ways = 0;

                for(int face = 1; face <= k; face++){
                    if(t - face >= 0){
                        ways += dp[i - 1][t - face];
                    }
                }

                dp[i][t] = ways % MOD;
            }
        }

        return dp[n][target];
    }
    int numRollsToTarget(int n, int k, int target) {

        // vector<vector<int>> dp(n+1, vector<int>(target+1, -1));

        // return solveUsingMem(n, k, target, dp);
        return solveUsingTab(n,k,target);

    }
};