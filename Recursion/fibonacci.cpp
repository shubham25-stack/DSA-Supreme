#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){
    cout<<fib(8)<<endl;
    
    return 0;
}