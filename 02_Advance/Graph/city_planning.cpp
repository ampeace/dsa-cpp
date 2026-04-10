//Route Planning in a city
//Problem Statement: Given a city map of roads between cities, determine if there is a path from  city A to city B.
//DFS use: Explore paths deeply until destination is found.
#include <iostream>
#include <vector>
using namespace std;

// DFS function to check path
bool dfs(int node, int target, vector<vector<int>> &adj, vector<bool> &visited) {
    // If destination reached
    if (node == target) return true;

    visited[node] = true;

    // Visit all neighbors
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, target, adj, visited)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int n, e;
    cout << "Enter number of cities (nodes): ";
    cin >> n;

    cout << "Enter number of roads (edges): ";
    cin >> e;

    vector<vector<int>> adj(n);

    cout << "Enter roads (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        // Undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int A, B;
    cout << "Enter source city A: ";
    cin >> A;

    cout << "Enter destination city B: ";
    cin >> B;

    vector<bool> visited(n, false);

    if (dfs(A, B, adj, visited))
        cout << " Path exists from " << A << " to " << B << endl;
    else
        cout << " No path exists from " << A << " to " << B << endl;

    return 0;
}