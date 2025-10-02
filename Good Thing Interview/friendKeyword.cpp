#include <iostream>
using namespace std;

class A {
private:
    int x;

public:
    A(int _val) : x(_val) {}
    friend class B;   // B can access x directly
};

class B {
public:
    void print(const A &a) {
        cout << a.x << endl;   // direct access (friendship)
    }
};

int main() {
    A a(5);
    B b;
    b.print(a);
    return 0;
}
