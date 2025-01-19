#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int n = 10;

    for(int i = 0; i<=n; i++){
        cout<<"Enter the element at index "<<i<< ": ";
        cin>>arr[i];
        arr[i] = 2 * arr[i]; //doubling the elements of array.
        cout<<endl;
    }

    cout<<"Printing the stored elements of array are : "<<endl;

    for(int i = 0; i<=n; i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}