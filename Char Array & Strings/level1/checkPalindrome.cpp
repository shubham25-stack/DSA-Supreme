#include <iostream>
using namespace std;

bool CheckPalindrome(char ch[], int size){
    int start = 0;
    int end = size - 1;
    
    while(start < end){
        if(ch[start] == ch[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int findLength(char ch[], int size){
    int index = 0;

    while(ch[index] != '\0' && index < size){
        index++;
    }
    return index;
}

int main(){
    char ch[100] = "racecar";
    int size = 100;
 
    int len = findLength(ch, size);
    int ans = CheckPalindrome(ch, len);
    if(ans == true){
        cout << "It is a palindrome string" << endl;
    }
    else {
        cout << "It is not a palindrome string" << endl;
    }
    return 0;
}
