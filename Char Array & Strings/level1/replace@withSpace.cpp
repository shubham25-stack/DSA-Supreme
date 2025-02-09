#include <iostream>
using namespace std;

void replaceCharacter(char ch[],int size){
    int index = 0;
    while(ch[index] != '\0'){
        char curr = ch[index];

        if(curr == '@'){
            //indert space
            ch[index] = ' ';
        }
        index++;
    }

}

int main(){
    char ch[100] = {"jh@c@jcxk@mjv@edd@ihi@"};
    int size = 10;
    replaceCharacter(ch,size);
    cout<<ch<<endl;
    return 0;
}