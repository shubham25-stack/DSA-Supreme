#include <iostream>
#include <string>
using namespace std;

class Bird {
private:
    int age, weight, nol;
    string color;

public:
    // Constructor
    Bird(int age = 0, int weight = 0, string color = "Unknown")
        : age(age), weight(weight), color(color), nol(2) {}

    // Getters and Setters
    int getAge() const { return age; }
    int getWeight() const { return weight; }
    string getColor() const { return color; }
    int getNoL() const { return nol; }

    void setAge(int a) { age = a; }
    void setWeight(int w) { weight = w; }
    void setColor(string c) { color = c; }

    void eat() {
        cout << "Bird is eating" << endl;
    }
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

class Sparrow : public Bird {
public:
    Sparrow(int age, int weight, string color)
        : Bird(age, weight, color) {}

    void grashing() {
        cout << "Sparrow is grashing" << endl;
    }
};

class Peagon : public Bird {
public:
    Peagon(int age, int weight, string color)
        : Bird(age, weight, color) {}

    void gutargu() {
        cout << "Peagon is gutargu karing hahahaha" << endl;
    }
};

int main() {
    Sparrow s(1, 1, "Brown");
    cout << "Sparrow color: " << s.getColor() << endl;
    s.eat();
    s.fly();
    s.grashing();

    Peagon p(2, 3, "White");
    cout << "Peagon color: " << p.getColor() << endl;
    p.gutargu();
    p.fly();

    return 0;
}
// inheritance code in these always wins the private class but you can only get back the publlic data into private data but never private data into public data
