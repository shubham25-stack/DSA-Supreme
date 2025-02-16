#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str) {
    string ans = "";
    int index = 0;

    while (index < str.length()) {
        if (ans.length() > 0 && ans[ans.length() - 1] == str[index]) {
            ans.pop_back();
        } else {
            ans.push_back(str[index]);
        }
        index++;
    }
    return ans;
}

int main() {
    string str = "abbsdffdf";
    str = removeDuplicates(str);
    cout << str << endl;

    return 0;
}
