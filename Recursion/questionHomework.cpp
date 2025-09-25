#include <iostream>
#include <vector>
using namespace std;

int digitsToNumber(const vector<int>& digits) {
    int number = 0;
    for (int d : digits) {
        number = number * 10 + d;
    }
    return number;
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5};
    int number = digitsToNumber(digits);
    cout << number << endl;
    return 0;
}