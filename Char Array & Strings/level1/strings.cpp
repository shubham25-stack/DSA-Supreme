#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name = "Shiv";
    //getline(cin,name); this is for taking elements after space too.
    
    cout<<"Print name : "<<name<<endl;

    int index = 0;
    while(name[index] != '\0'){
        cout<<"Index : "<<index<<" Character: "<<name[index]<<endl;
        index++;
    }

    return 0;
}