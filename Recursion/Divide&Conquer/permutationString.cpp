#include <iostream>
using namespace std;

void permutation(string str, int index){
    
    if(index>= str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j =index; j<str.length(); j++){
        swap(str[index],str[j]);
        //aage recursion sambhalega
        permutation(str, index+1);
        //backtracking only for pass by reference thing
        swap(str[index], str[j]);
    }

}

int main(){

    string str = "abcd";
    int i = 0;
    permutation(str,i);
    return 0;
}