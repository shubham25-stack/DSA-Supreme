#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int &element) {
    // base case
    if (st.empty()) {
        st.push(element);
        return;
    }

    // 1 case solve
    int temp = st.top();
    st.pop();

    insertAtBottom(st, element);

    st.push(temp);
}
void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,temp);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(30);

    // int element = 100;
    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
