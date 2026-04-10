bool check(vector<int>& curr,vector<int>&prev){
    if(prev[0] <= curr[0] && prev[1] <= curr[1] && prev[2] <= curr[2]){
        return true;
    }
    else{
        return false;
    }
}
int solveUsingTabulationSO(string a, string b){
    vector<int> curr(a.length()+1,0);
    vector<int> next(a.length()+1,0);

    for(iint j = b.length()-1; j>=0; j--){
        for(int i = a.length()-1; i>=0; i--){

            int ans = 0;
            if(a[i] == b[j]){
                ans = 1 + next(i+1);
            }
            else{
                ans = 0+max(next[i],curr[i+1]);
            }
            curr[i] = ans;
        }
        next=curr;
    }
    return next[0];
}