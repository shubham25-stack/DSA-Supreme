#include <iostream>
using namespace std;

int main(){
    char ch[10] = {"Shiv "};

    cout<<"Printing the value of ch: " <<ch<<endl;
    
    for(int i =0; i<10; i++){
        cout<<"At index: "<<i<<" "<<ch[i]<<endl;
    }

    char temp = ch[6];
    int value = (int)temp;
    cout<<"printing integer Value: "<<value<<endl;
}