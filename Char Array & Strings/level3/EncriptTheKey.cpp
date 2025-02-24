//if you had learned the hash map then go through that approach
//otherwise solve by this methods

#include <iostream>
#include <string.h>
using namespace std;

string decodeMessage(string key, string message){
    //create mapping
    char start = 'a';
    char mapping[280] = {0};

    for(auto ch:key){ //this is called for each loop
        if(ch != ' ' && mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        }
    }

    //use mapping
    string ans;

    for(auto ch: message){
        if(ch == ' '){
            ans.push_back(' ');
        }
        else{
            char decodedChar = mapping[ch];
            ans.push_back(decodedChar);
        }     
    }
    return ans;
}

int main(){

    return 0;
}