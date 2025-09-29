#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Teacher
{
    public:
    void teach(){
        cout<<"Teaching"<<endl;
    }

};
class Researcher{
    public:
    void research(){
        cout<<"Researcher..."<<endl;
    }
};

class Professor:public Teacher, public Researcher {
    public:
    void bore(){
        cout<<"Boring class..."<<endl;
    }
};

int main(){
    Professor p;
    p.research();

    return 0;
}
