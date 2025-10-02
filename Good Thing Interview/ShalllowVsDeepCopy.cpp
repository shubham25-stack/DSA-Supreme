#include <iostream>
#include <cstdio>
using namespace std;

class abc{
public:
    int x;
    int *y;

    abc(int _x, int _y):x(_x),y(new int(_y)) {}

    // Deep Copy Constructor default copy constructor
    abc(const abc& obj) {
        x = obj.x;
        y = new int(*obj.y);
        //dumb shallow copy
        // y = obj.y;
    }

    void print() const {
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x,y, *y);
    }
};  // <-- missing ; fixed
~abc(){
    delete y;
}
  

int main(){
    abc a(1,2);
    a.print();

    abc b=a;   // calls copy constructor
    b.print();

    return 0;
}
