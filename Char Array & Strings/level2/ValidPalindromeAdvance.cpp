class Solution {
    public:
    bool checkPalinfrome(string s, int i,int j){
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
        bool validPalindrome(string s){
            int i = 0;
            int j = s.length() - 1;

            while(i<j){
                if(s[i] == s[j]){
                    i++;
                    j--;
                }
                else{
                    //ith character removal
                    bool ans1 = checkPalindrome(s,i+1,j);
                    
                    //jth character ko  remove krna h
                    bool ans2 = checkPalinfrome(s,i,j-1);

                    return ans1 || ans2;
                }
            }
            //agr yaha tkk pohche ho mtlb valid palindrome h
            return true;
        }
}