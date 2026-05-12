#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkMatch(unordered_map<string, int>& wantMap, unordered_map<string, int>& discountMap) {
    for (auto const& [item, count] : wantMap) {
        if (discountMap[item] < count) return false;
    }
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> wantMap;

    for (int i = 0; i < want.size(); ++i) {
        wantMap[want[i]] = number[i];
    }

    unordered_map<string, int> discountMap;
    for (int i = 0; i < 10; ++i) {
        discountMap[discount[i]]++;
    }

    if (checkMatch(wantMap, discountMap)) answer++;

    for (int i = 10; i < discount.size(); ++i) {
        discountMap[discount[i]]++;
        discountMap[discount[i - 10]]--;

        if (checkMatch(wantMap, discountMap)) {
            answer++;
        }
    }

    return answer;
}