#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<vector<char>>& matrix, int i, int j, int row, int col, int &maxi) {
    if (i >= row || j >= col) {
        return 0;
    }

    int right = solve(matrix, i, j + 1, row, col, maxi);
    int diagonal = solve(matrix, i + 1, j + 1, row, col, maxi);
    int down = solve(matrix, i + 1, j, row, col, maxi);

    if (matrix[i][j] == '1') {
        int ans = 1 + min(right, min(down, diagonal));
        maxi = max(maxi, ans);
        return ans;
    } else {
        return 0;
    }
}

int maximalSquare(vector<vector<char>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int maxi = 0;

    solve(matrix, 0, 0, row, col, maxi);

    return maxi * maxi;
}

int main() {
    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    cout << "Largest square area = " << maximalSquare(matrix) << endl;

    return 0;
}
