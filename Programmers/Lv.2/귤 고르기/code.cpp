#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> sizeCount;

    for (int i = 0; i < tangerine.size(); ++i)
    {
        ++sizeCount[tangerine[i]];
    }

    vector<pair<int, int>> copyVec(sizeCount.begin(), sizeCount.end());

    sort(copyVec.begin(), copyVec.end(),
        [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

    int sellTanCount = 0;
    for (const auto& pair : copyVec)
    {
        if (sellTanCount < k)
        {
            sellTanCount += pair.second;
            ++answer;
        }
    }

    return answer;
}