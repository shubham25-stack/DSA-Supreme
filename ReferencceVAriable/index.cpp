
#include <iostream>
using namespace std;

int main(){

//referance variable it is a variable of another one
    int n = 5;
    int &m = n;
    int &c = n;

    cout<<"n: "<<n<<endl;
    cout<<"m: "<<m<<endl;
    cout<<"c: "<<c<<endl;

    m++;

    cout<<"n: "<<n<<endl;
    cout<<"m: "<<m<<endl;
    cout<<"c: "<<c<<endl;


    

    return 0;
}