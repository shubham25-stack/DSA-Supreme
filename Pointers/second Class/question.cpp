#include <iostream>
using namespace std;

int main(){

    int a=5;
    int *p = &a;
    int** q = &p;

    cout<<a<<"\n"<<endl;
    cout<<&a<<"\n"<<endl;

    cout<<p<<"\n"<<endl;
    cout<<&p<<"\n"<<endl;
    cout<<*p<<"\n"<<endl;

    cout<<q<<"\n"<<endl;
    
    cout<<&q<<"\n"<<endl;
    cout<<*q<<"\n"<<endl;
    cout<<*q<<"\n"<<endl;
    cout<<**q<<"\n"<<endl;


    return;
}