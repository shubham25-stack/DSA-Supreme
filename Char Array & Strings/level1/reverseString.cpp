#include <iostream>
using namespace std;

int findLength(char ch[],int size){
    int length =0;
    int index = 0;

    while(ch[index] != '\0'){
        index++;
    }
    return index++;
}

void reverseString(char ch[], int n){
    int i =0;
    int j = n-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[10] = {"Shiv"};

    cout<<"Brfore "<<ch<<endl;
    int len = findLength(ch,10);
    reverseString(ch,len);
    cout<<"After "<<ch<<endl;
    return 0;
}