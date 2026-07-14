#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int dfs(int current, int parent, const vector<vector<int>>& graph, int n, int& min_diff) {
    int subtree_count = 1;

    for (int next_node : graph[current]) {

        if (next_node != parent) {

            int child_count = dfs(next_node, current, graph, n, min_diff);
            subtree_count += child_count;

            int diff = abs(n - 2 * child_count);

            min_diff = min(min_diff, diff);
        }
    }

    return subtree_count;
}

int solution(int n, vector<vector<int>> wires) {
    vector<vector<int>> graph(n + 1);

    for (const auto& wire : wires) {
        int u = wire[0];
        int v = wire[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int min_diff = n;

    dfs(1, 0, graph, n, min_diff);

    return min_diff;
}