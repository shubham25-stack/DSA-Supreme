#include <iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30};
    int n = 3;
    int sum = 0;
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            sum = arr[i] + arr[j];
            cout<<sum<<endl;
        }
    }

    return 0;
}