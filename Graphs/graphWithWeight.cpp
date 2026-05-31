#include <iostream>
#include <unordered_map>
#include <list>
#include <utility>

using namespace std;
// for generalizint just use template 
// template<typename T> for character integer sare cheez k liye krte h
class graphWithWeight {
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int wt, bool direction) {
        if (direction == 1) {
            // Directed graph
            adjList[u].push_back(make_pair(v, wt));
        }
        else {
            // Undirected graph
            adjList[u].push_back({v, wt});
            adjList[v].push_back({u, wt});
        }

        printG();
        cout << endl;
    }

    void printG() {
        for (auto i : adjList) {
            cout << i.first << ": {";

            for (pair<int, int> p : i.second) {
                cout << "{" << p.first << ", " << p.second << "} ";
            }

            cout << "}" << endl;
        }
    }
};

int main() {
    graphWithWeight g;

    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 10, 1);
    g.addEdge(2, 3, 8, 1);
    g.addEdge(3, 4, 12, 1);
    g.addEdge(4, 5, 15, 1);
    g.addEdge(5, 6, 20, 1);

    return 0;
}