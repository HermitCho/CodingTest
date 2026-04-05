#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

int node;
int edge;
int start;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int start) {
    
    if (!visited[start])
    {
        visited[start] = true;
    }

    cout << start << " ";
    for (int next : adj[start])
    {
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

void bfs(int start) {
    queue<int> q;

    if (!visited[start])
    {
        q.push(start);
        visited[start] = true;
    }

    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int next : adj[current])
        {
            if (!visited[next])
            {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {

    cin >> node >> edge >> start;

    adj.resize(node + 1);
    visited.resize(node + 1, false);

    for (int i = 0; i < edge; ++i)
    {
        int n;
        int m;

        cin >> n >> m;
        adj[n].push_back(m);
        adj[m].push_back(n);
        visited[n] = false;
        visited[m] = false;
    }
    
    for (vector<int>& j : adj)
    {
        sort(j.begin(), j.end());
    }

    dfs(start);
    cout << endl;

    fill(visited.begin(), visited.end(), false);

    bfs(start);

    return 0;
}
