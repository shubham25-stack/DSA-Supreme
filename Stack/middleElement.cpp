#include <iostream>
#include <stack>
using namespace std;
// 1 baar delete ka code dekh lena middle of the stack
int solve(stack<int> &st, int pos) {
    // Base case
    if (pos == 1) {
        return st.top(); //st.pop()
    }
        
    int temp = st.top();
    st.pop();

    // Recursive call
    int ans = solve(st, pos - 1);

    // Restore stack
    st.push(temp); //delet3e pop bs

    return ans;
}

int getMiddleElement(stack<int> &st) {
    if (st.empty()) {
        return -1;
    }

    int size = st.size();
    int pos;

    if (size & 1) {           // odd size
        pos = size / 2 + 1;
    } else {                  // even size
        pos = size / 2;
    }

    return solve(st, pos);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

     int mid = getMiddleElement(st);
    cout << "Middle element: " << mid << endl;

    return 0;
}
