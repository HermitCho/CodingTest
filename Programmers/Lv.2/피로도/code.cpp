#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int maxDungeons = 0;
vector<bool> visited;

void backtracking(int currentFatigue, int dunCount, const vector<vector<int>>& dungeons) {

    maxDungeons = max(maxDungeons, dunCount);

    for (int i = 0; i < dungeons.size(); ++i) {

        if (!visited[i] && currentFatigue >= dungeons[i][0]) {

            visited[i] = true;

            backtracking(currentFatigue - dungeons[i][1], dunCount + 1, dungeons);

            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {

    visited.assign(dungeons.size(), false);
    maxDungeons = 0;

    backtracking(k, 0, dungeons);

    return maxDungeons;
}