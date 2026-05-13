#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> clothType;

    for (int i = 0; i < clothes.size(); ++i)
    {
        ++clothType[clothes[i][1]];
    }

    for (auto const& it : clothType)
    {
        answer *= (it.second + 1);
    }

    return answer - 1;
}