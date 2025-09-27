//most important question interview level question

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>>& visited) {
    if ((newx >= 0 && newx < row) &&
        (newy >= 0 && newy < col) &&
        maze[newx][newy] == 1 &&
        visited[newx][newy] == false) {
        return true;
    } else {
        return false;
    }
}

void printAllPath(int maze[4][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>>& visited) {
    if (srcx == row - 1 && srcy == col - 1) {
        cout << output << endl;
        return;
    }

    // Up
    int newx = srcx - 1, newy = srcy;
    if (isSafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllPath(maze, row, col, newx, newy, output + "U", visited);
        visited[newx][newy] = false;
    }

    // Down
    newx = srcx + 1, newy = srcy;
    if (isSafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllPath(maze, row, col, newx, newy, output + "D", visited);
        visited[newx][newy] = false;
    }

    // Right
    newx = srcx, newy = srcy + 1;
    if (isSafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllPath(maze, row, col, newx, newy, output + "R", visited);
        visited[newx][newy] = false;
    }

    // Left
    newx = srcx, newy = srcy - 1;
    if (isSafe(newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        printAllPath(maze, row, col, newx, newy, output + "L", visited);
        visited[newx][newy] = false;
    }
}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 0, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };

    int row = 4, col = 4;
    int srcx = 0, srcy = 0;
    string output = "";

    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0) {
        cout << "No path exist" << endl;
    } else {
        visited[srcx][srcy] = true;
        printAllPath(maze, row, col, srcx, srcy, output, visited);
    }

    return 0;
}
