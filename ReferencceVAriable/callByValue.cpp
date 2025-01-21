#include <iostream>
using namespace std;

int increaseByOne(int n){
    n = n+1;
    return n;
}

int main(){

    int n = 6;
    // cin>>n;
    int m = increaseByOne(n);
    cout<<m<<endl;

    return 0;
}