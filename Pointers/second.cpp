#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int *ptr = &a;

    cout << a << " " << &a << " " << *ptr << " " << ptr << << " " << &ptr << " " 
         << (*ptr)++ << " " << ++(*ptr) << " " << *ptr = *ptr / 2 << " " << *ptr = *ptr - 2 << endl;

    return 0;
}

    // int a = 100;
    // int *ptr = &a;
    // a = a+1;
    // *ptr = *ptr+1;
    // cout<<a<<endl;
    // cout<<ptr<<endl;

     