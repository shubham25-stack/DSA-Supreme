#include <iostream>
using namespace std;

int main(){
    string name = "Shiv Shakti";
    string n1 = "Krishnaa";
    string n2 = "this is an new string";
    string temp = "";

    cout<<"Length of string : "<<name.length()<<endl;
    cout<<"String is empty or not: "<<name.empty()<<endl;
    cout<<"String is empty or not: "<<temp.empty()<<endl;

    cout<<"0th position : "<<name.at(0)<<endl;

    cout<<"First char : "<<name.front()<<endl;

    cout<<"Last char : "<<name.back()<<endl;

    cout<<name.append(n1)<<endl;

    n1.push_back('a');
    cout<<n1<<endl;
    n1.pop_back();
    cout<<n1<<endl;




    return 0; 
}