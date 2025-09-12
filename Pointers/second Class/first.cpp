#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    //pointer to an array
    int* ptr = arr;

    //pointer to an array
    int (*ptr)[5] = &arr;
    cout<<(*ptr)[0];
    // char ch[10] = "Babbar";
    // char* cptr = &ch;

    return 0;
}