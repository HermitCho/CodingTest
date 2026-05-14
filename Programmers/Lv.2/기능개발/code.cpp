#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> daysQueue;

    for (int i = 0; i < progresses.size(); ++i) {
        int remainProgress = 100 - progresses[i];

        int remainDays = (remainProgress + speeds[i] - 1) / speeds[i];
        daysQueue.push(remainDays);
    }

    while (!daysQueue.empty()) {
        int currentDeployDay = daysQueue.front();
        daysQueue.pop();

        int deployCount = 1;

        while (!daysQueue.empty() && daysQueue.front() <= currentDeployDay)
        {
            deployCount++;
            daysQueue.pop();
        }

        answer.push_back(deployCount);
    }

    return answer;
}