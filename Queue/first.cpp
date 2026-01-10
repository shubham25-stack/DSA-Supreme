#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);

    if (qu.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    cout << "Front is : " << qu.front() << endl;
    cout << "Back is : " << qu.back() << endl;

    while (!qu.empty()) {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}
