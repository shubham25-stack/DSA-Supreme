//leetcode q -: 198
#include <iostream>
using namespace std;

int solve(vector<int>nums, int size, int index){
    //base case
    if(index>=size){
        return 0;
    }

    //chori karlo
    int option1 = nums[index] + solve(nums,size,index+2);


    //chori na kro
    int option2 = 0 + solve(nums,size,index+1);
    int finalAns = max(option1,option2);
    return finalAns;
}

int rob(vector<int>& nums){
    int size = nums.size();
    int index = 0;
    int ans = solve(nums,size,index);
    return ans;
    
}
//dicide and conquer problem