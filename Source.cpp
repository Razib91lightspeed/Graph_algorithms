#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Perform BFS on the graph starting at node u
void bfs(vector<vector<int>>& graph, int u) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    visited[u] = true;
    q.push(u);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int i = 0; i < graph[v].size(); i++) {
            int neighbor = graph[v][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Perform DFS on the graph starting at node u
void dfs(vector<vector<int>>& graph, int u) {
    vector<bool> visited(graph.size(), false);
    stack<int> s;
    s.push(u);
    while (!s.empty()) {
        int v = s.top();
        s.pop();
        if (!visited[v]) {
            visited[v] = true;
            cout << v << " ";
            for (int i = 0; i < graph[v].size(); i++) {
                int neighbor = graph[v][i];
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
}

int main() {
    int n = 5; // number of nodes in the graph
    vector<vector<int>> graph(n);
    graph[0] = { 1, 2 };
    graph[1] = { 0, 2, 3 };
    graph[2] = { 0, 1, 3 };
    graph[3] = { 1, 2, 4 };
    graph[4] = { 3 };

    cout << "BFS: ";
    bfs(graph, 0);
    cout << endl;

    cout << "DFS: ";
    dfs(graph, 0);
    cout << endl;

    return 0;
}
