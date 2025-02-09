#include <iostream>
#include <string.h>
using namespace std;

//the manual formation
int findLength(char ch[],int size){
    int length =0;
    int index = 0;

    // for(int i=0; i<size; i++){
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }

    //by for loop
    while(ch[index] != '\0'){
        // length++;
        index++;
    }
    // return length;
    return index++;
}

int main(){
char ch[100] = {"Shiv Shakti"};

int len = findLength(ch,100);
cout<<"Length of string is: "<<len<<endl;
cout<<"length string is : "<<strlen(ch)<<endl; //using strlen function
    return 0;
};