#include <string>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    map<int, int> OldBCount, YoungBCount;

    for (int i = 0; i < topping.size(); i++)
    {
        OldBCount[topping[i]] += 1;
    }

    for (int i = topping.size() - 1; i >= 0; --i)
    {
        YoungBCount[topping[i]] += 1;
        OldBCount[topping[i]] -= 1;

        if (OldBCount[topping[i]] == 0)
        {
            OldBCount.erase(topping[i]);
        }

        if (OldBCount.size() == YoungBCount.size())
        {
            answer++;
        }
    }

    return answer;
}