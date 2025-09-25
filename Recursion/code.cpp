#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }

    int recursion = factorial(n-1);
    int final = n * recursion;
    return final;
}

int main(){

    cout<<factorial(5)<<endl;

    return 0;
}