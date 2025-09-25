#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int solve(vector<int>& coins, int amount){
    //base case
     if(amount == 0){
        return 0;
    }
    int mini = INT_MAX;
    int ans = INT_MAX;
    for(int i=0; i<coins.size(); i++){
        int coin = coins[i];

        if(coin<=amount){
            int recans
            int recAns = 1 + solve(coins,amount-coin);
            if(recAns != INT_MAX){
                ans = 1 + recAns;
            }
            mini = mini(mini,ans);

        }
        return mini;
    }
}

int coinChange(vector<int>& coins, int amount){
    
   int ans = solve(coins,amount);

   if(ans == INT_MAX){
    return -1;
   }
   else{
    return ans;
   }
    

}

int main(){

    return 0;
}