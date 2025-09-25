#include <iostream>
#include <vector>
using namespace std;

void findAllIndex(const string &s, int i, vector<int> &ans) {
    if (i >= s.size()) return;
    if (s[i] == 'a') ans.push_back(i);
    findAllIndex(s, i + 1, ans);
}

int main() {
    string str = "adndsjaaajnjbabahba398u32a";
    vector<int> indexes;
    findAllIndex(str, 0, indexes);

    for (int idx : indexes) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
