#include <iostream>
using namespace std;

int main(){
    int arr[5];  // initialising size of an array
    int n = 4; // arr.size()-1;

    //taking input from user
    cout<<"Enter input :"<<endl;
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }

    //calculating sum;
    int sum = 0; 
    for(int i = 0; i<=n; i++){
        sum = sum + i;
    }

    //printing the sum
    cout<<"The sum of array is : "<<sum<<endl;

    return 0;
}