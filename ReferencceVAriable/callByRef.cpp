#include <iostream>
using namespace std;

void increment(int &k){
    k = k*100;
}

int main(){

    int n = 5;
    increment(n);
    cout<<"n: "<<n<<endl;
    return 0;
}