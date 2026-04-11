bool solveUsingRec(vector<int>& arr, int index, int sum, int target){
    if(index >=arr.size()){
        return 0;
    }if(sum>target){
        return 0;
    }
    if(sum == target){
        return true;
        bool include = solveUsingRec(arr,index+1,sum+arr[index],target);
        bool exclude = solveUsingRec(arr,index+1,sum,target);
    }
    return  include || exclude;

}
bool canPartition(vector<int>& nums){
    int index =0;
    int totalSum = 0;
    for(int i =0; i<nums.size(); i++){
        totalSum += nums[i];
    }
    if(totalSum & 1){
        return false;
    }
    int target = totalSum/2;
    int currSum =0;
    bool ans = solveUsingRec(nums,index,currSum,target);
    return ans;
}