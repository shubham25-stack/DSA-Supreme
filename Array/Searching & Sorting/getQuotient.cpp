#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int start =0;
    int end = dividend;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(mid*divisor == dividend){
            return mid;
        }
        if(mid * divisor < dividend){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;  
}

int main(){
    int divisor = 5;
    int dividend = 29;

    int ans = getQuotient(abs(divisor),abs(dividend));

    if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)){
        ans = 0-ans;
    }
    cout<<"Final Ans is: "<<ans<<endl;

    return 0;
}