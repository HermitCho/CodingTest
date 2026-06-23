#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int checkIsland(vector<string>& maps, vector<vector<bool>>& visited, int x, int y) {

    visited[x][y] = true;

    int currentFood = maps[x][y] - '0';

    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < maps.size() && ny >= 0 && ny < maps[0].size()) {
            if (maps[nx][ny] != 'X' && !visited[nx][ny]) {

                currentFood += checkIsland(maps, visited, nx, ny);
            }
        }
    }

    return currentFood;
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    int n = maps.size();
    int m = maps[0].length();

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maps[i][j] != 'X' && !visited[i][j]) {
                answer.push_back(checkIsland(maps, visited, i, j));
            }
        }
    }

    if (answer.empty()) {
        answer.push_back(-1);
    }
    else {
        sort(answer.begin(), answer.end());
    }

    return answer;
}