#include <iostream>
using namespace std;

void convertToUpperCase(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        char currentCharacter = ch[index];
        //if lowercase and convert to upper case
        if(currentCharacter >= 'a' && currentCharacter <= 'z'){
            ch[index] = currentCharacter - 'a' + 'A';
        }
        index++;
    }
}

void convertToLowerCase(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        char currentCharacter = ch[index];
        //if lowercase and convert to upper case
        if(currentCharacter >= 'A' && currentCharacter <= 'Z'){
            ch[index] = currentCharacter - 'A' + 'a';
        }
        index++;
    }
}

int main(){
    char ch[100]{"vfnkkfdnkfvnknfvknodjdvnj"};
    char chr[100]{"VFNKKFDNKFVNKNFVKNODJDVNJ"};
    convertToUpperCase(ch,100);
    cout<<ch<<endl;
    convertToLowerCase(chr,100);
    cout<<chr<<endl;
    return 0;
}