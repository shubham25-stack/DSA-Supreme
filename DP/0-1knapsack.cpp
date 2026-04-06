#include <iostream>
#include <vector>
using namespace std;

int solveUsingRec(int capacity, int wt[], int profit[], int index, int n) {
    // base case
    if (index >= n) {
        return 0;
    }

    // include
    int include = 0;
    if (wt[index] <= capacity) {
        include = profit[index] + solveUsingRec(capacity - wt[index], wt, profit, index + 1, n);
    }

    // exclude
    int exclude = solveUsingRec(capacity, wt, profit, index + 1, n);

    return max(include, exclude);
}

int solveUsingMem(int capacity, int wt[], int profit[], int index, int n, vector<vector<int>>& dp) {
    // base case
    if (index >= n) {
        return 0;
    }

    // check dp
    if (dp[index][capacity] != -1) {
        return dp[index][capacity];
    }

    // include
    int include = 0;
    if (wt[index] <= capacity) {
        include = profit[index] + solveUsingMem(capacity - wt[index], wt, profit, index + 1, n, dp);
    }

    // exclude
    int exclude = solveUsingMem(capacity, wt, profit, index + 1, n, dp);

    // store
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}
int solveUsingTabulationSO2(int capacity, int wt[], int profit[], int n) {
	vector<int> next(capacity+1, 0);
	
	for(int j=n-1; j>=0; j--) {
		for(int i=capacity; i>=0; i--) {
			int include = 0;
			if(wt[j] <= i) {
				include = profit[j] + next[i-wt[j]];
			}
			int exclude = 0 + next[i];
			next[i] = max(include, exclude);
		}
		//shifting
		// next = curr;
	}
	return next[capacity];
}

int main() {
    int capacity = 50;
    int wt[] = {10, 20, 30};
    int profit[] = {60, 100, 120};
    int index = 0;
    int n = 3;
    vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));

    int ans = solveUsingRec(capacity, wt, profit, index, n);
    cout << "max profit using recursion: " << ans << endl;
    int ans2 = solveUsingMem(capacity, wt, profit, index, n,dp);
    cout<<"Max profit uning MEmoizaion: "<<ans2<<endl;

    return 0;
}