#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0; // = timer
    int curBridgeWeight = 0;
    int curTruckEle = 0;
    int remainTruck = truck_weights.size();
    queue<vector<int>> bridge;

    while (remainTruck > 0)
    {
        answer++;

        if (!bridge.empty() && (bridge.front())[1] + bridge_length == answer)
        {
            curBridgeWeight -= (bridge.front())[0];
            bridge.pop();
            remainTruck--;
        }

        if (bridge.size() < bridge_length)
        {
            if (weight >= truck_weights[curTruckEle] + curBridgeWeight)
            {
                vector<int> v;
                v.push_back(truck_weights[curTruckEle]);
                curBridgeWeight += truck_weights[curTruckEle];
                v.push_back(answer);
                bridge.push(v);
                curTruckEle++;
            }
        }
    }
    return answer;
}