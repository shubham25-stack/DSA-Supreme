#include <iostream>
using namespace std;

//sum same as factorial
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int ans = n + sum(n-1);
//     return ans;
// }

void printDigits(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit = n % 10;
    //update number
    n = n/10;

    //recursive call
    printDigits(n);

    cout<<digit<<endl;
}

int main(){
    // int n;
    // cout << "Enter a positive integer: ";
    // cin >> n;
    // cout << "Sum of first " << n << " natural numbers is: " << sum(n) << endl;
    int n = 3287;
    printDigits(n); 
    return 0;
}