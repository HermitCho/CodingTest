#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int pSize = priorities.size();

    queue<pair<int, int>> readyQueue;
    priority_queue<int> pq;

    for (int i = 0; i < pSize; ++i)
    {
        readyQueue.push({ priorities[i], i });
        pq.push(priorities[i]);
    }

    int sequence = 0;

    while (!readyQueue.empty())
    {
        if (readyQueue.front().first != pq.top())
        {
            readyQueue.push(readyQueue.front());
            readyQueue.pop();
        }
        else
        {
            ++sequence;
            if (readyQueue.front().second == location)
            {
                answer = sequence;
                break;
            }
            readyQueue.pop();
            pq.pop();
        }
    }

    return answer;
}