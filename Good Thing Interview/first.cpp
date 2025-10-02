#include <iostream>

using namespace std;

class abc
{

public:
  static int x,y;

   void print() const {
    // it includes this function as this->x and this->y
        cout<<x<<" "<<y<<endl;
   }
};

//static member function
// int x,y;
// abc() : x(0),y(0) {}
// static void print(){
//no this pointer accessible
//     print("iam in static %s\n", _FUNCTION_)
// }

int abc::x;
int abc::y;

int main(){

    abc obj1;
    obj1.x=1;
    obj1.y=12;
    obj1.print();
    
    abc obj2;
    obj2.x=20;
    obj2.y=30;
    obj2.print();

    return 0;
}

