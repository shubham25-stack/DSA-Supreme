#include <iostream>
using namespace std;

//sum same as factorial
int sum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = n + sum(n-1);
    return ans;
}

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sum(n) << endl;
    return 0;
}