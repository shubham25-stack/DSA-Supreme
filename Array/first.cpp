#include <iostream>
using namespace std;

int main(){
    //creation of array
    /*int arr[10];
    char crr[20];
    bool bl[27];
    long lon[12];
    short sor[29];
    cout<<"Hurray Array is created "<<endl;*/

    int m = 9;
    cout<<"Address of a : "<< &m <<endl;

    int arr[6];
    cout<<"Base Address of Arr  is: "<< &arr <<endl;
    cout<<"Base Address of Arr  is: "<< arr <<endl;
    // the both of it gives the same result.

    //sizeOf:
    cout<<"Size of m : "<<sizeof(m)<<endl;
    cout<<"Size of Array : "<<sizeof(arr)<<endl; //6*4 bytes

    //initializing an array.
    // int arr[5] = {2,4,5,7,8}; // perfectly inserted
    // int arr[]= {5,5,6,7,8,3,6}; // inserted without initiating
    // int arr[3] = {1}; // inserted less than created
    // //int arr[5] = {1,2,3,4,5,6,8}; //inserted more than created

    //indexing
    int a[5] = {2,3,4,5,6};
    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    // cout<<a[2]<<endl;
    // cout<<a[3]<<endl;
    // cout<<a[4]<<endl;

    //indexing by loop
    // int n = 4;
    // for(int i= 0; i<=n; i++){
    //     cout<<a[i]<<" ";
    // }
    
    //taking input into array
    // int c[5];
    // int n = 5;
    // for(int i = 0; i<=n; i++){
    //     cout<<"Enter the value for index "<< i <<" : ";
    //     cin >> c[i];
    //     cout<<endl;
    // }
    // //printing the array which the input is taken
    // cout<<"Printing the array"<<endl;
    // for(int i=0;i<=n; i++){
    //     cout<<c[i]<<" ";
    // }

    

    return 0;
}