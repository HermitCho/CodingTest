#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_set>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    queue<int> mainLine;
    stack<int> subLine;
    int mainEle;

    for (int i = 0; i < order.size(); i++)
    {
        mainLine.push(i + 1);
    }

    for (int i = 0; i < order.size(); i++)
    {
        if (!subLine.empty() && subLine.top() == order[i])
        {
            subLine.pop();
            answer++;
            continue;
        }

        while (!mainLine.empty()
            && mainLine.front() != order[i])
        {
            subLine.push(mainLine.front());
            mainLine.pop();
        }

        if (!mainLine.empty()
            && mainLine.front() == order[i])
        {
            mainLine.pop();
            answer++;
            continue;
        }

        break;
    }

    return answer;
}