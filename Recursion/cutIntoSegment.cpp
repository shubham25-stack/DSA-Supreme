#include <iostream>
#include <limits.h>
using namespace std;

int maximizeTheCuts(int n, int x, int y, int z){

    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

    // x length ka 1 segment cut kia baki recursion dekhega
    int option1 = 1 + maximizeTheCuts(n-x,x,y,z);
    // y length ka seg cut kia baki recursion dega
    int option2 = 1+ maximizeTheCuts(n-y,x,y,z);
    // z length ka seg cut krr lia baki recursion dekhega
    int option3 = 1 + maximizeTheCuts(n-z,x,y,z);

    int finalAns = max(option1,max(option2,option3));
    return max;


}
//one of the best problem for interview of top tech companies


int main(){

    return 0;
}