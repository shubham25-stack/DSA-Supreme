//leetcode 72 no question
#include <iostream>
using namespace std;

int solve(ztring& a, string& b, int i, int j){
    if(i>=a.length()){
        //word 1 ki length chhoti h 
        return b.length()-j;
    }
    if(j>=b.length()){
        return a.length() - i;
    }
    int ans = 0;
    if(a[i] == b[j]){
        //match
        ans = 0 + solve(a,b,i+1,j+1);
    }
    else{
        int option1 = 1 +solve(a,b,i,j+1);
        //remove kra
        int option2 = 1 + solve(a,b,i+1,j);

        //replace
        int option3 = 1 + solve(a,b,i,j);
        ans = min(option1, min(option2,option3));
    }
    return ans;
}

int minDistance(string word1, string word2){
    int i =0;
    int j = 0;
    int ans = solve(word1,word2,i,j);
    return ans;
}