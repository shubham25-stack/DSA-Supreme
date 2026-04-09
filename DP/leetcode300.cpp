class Solution {
public:
    int solveUsingMem(vector<int>& nums, int curr, int prev, vector<vector<int>>& dp){
    if(curr >= nums.size()){
        return 0;
    }

    if(dp[curr][prev+1] != -1){
        return dp[curr][prev+1];
    }

    int include = 0;

    if(prev == -1 || nums[curr] > nums[prev]){
        include = 1 + solveUsingMem(nums, curr+1, curr, dp);
    }

    int exclude = solveUsingMem(nums, curr+1, prev, dp);

    return dp[curr][prev+1] = max(include, exclude);
}

int usingBinarySearch(vector<int>& nums){
    
}

    int lengthOfLIS(vector<int>& nums) {
        // int curr = 0;
        // int prev = -1;
        // vector<vector<int>> dp(nums.size()+1, vector<int>(nums.size()+1, -1));
        // int ans = solveUsingMem(nums,curr,prev,dp);
        int n = nums.size();
        if(n == 0) return 0;

        vector<int> dp(n, 1);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, dp[i]);
        }

        return ans;

    }
};