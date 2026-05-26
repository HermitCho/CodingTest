#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <unordered_map>

using namespace std;
int timeToMinutes(const string& timeStr) {
    int hours = stoi(timeStr.substr(0, 2));
    int minutes = stoi(timeStr.substr(3, 2));
    return hours * 60 + minutes;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;

    unordered_map<string, int> inTime;

    map<string, int> totalTime;

    for (const string& record : records) {
        stringstream ss(record);
        string time, carNum, status;
        ss >> time >> carNum >> status;

        int minutes = timeToMinutes(time);

        if (status == "IN") {
            inTime[carNum] = minutes;
        }
        else {
            totalTime[carNum] += (minutes - inTime[carNum]);
            inTime.erase(carNum);
        }
    }

    int endOfDay = 23 * 60 + 59;
    for (const auto& pair : inTime) {
        totalTime[pair.first] += (endOfDay - pair.second);
    }

    int baseTime = fees[0], baseFee = fees[1];
    int unitTime = fees[2], unitFee = fees[3];

    for (const auto& pair : totalTime) {
        int timeSpent = pair.second;

        if (timeSpent <= baseTime) {
            answer.push_back(baseFee);
        }
        else {
            int extraTime = timeSpent - baseTime;
            int extraFee = ((extraTime + unitTime - 1) / unitTime) * unitFee;
            answer.push_back(baseFee + extraFee);
        }
    }

    return answer;
}