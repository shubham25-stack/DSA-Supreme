#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> st) {  // pass by value (copy)
    cout << "Stack elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Size of the stack: " << st.size() << endl;

    st.pop();

    cout << "Top of the stack: " << st.top() << endl;

    printStack(st);

    return 0;
}
