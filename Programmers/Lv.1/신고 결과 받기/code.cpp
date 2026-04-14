#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> reports, int reportCount) {
    vector<int> answer(id_list.size(), 0);
    unordered_map<string, set<string>> reportPerson;
    unordered_map<string, int> reportedPersonCount;

    for (string report : reports)
    {
        string reporter, reported;
        stringstream ss(report);

        ss >> reporter;
        ss >> reported;

        if (reportPerson[reporter].insert(reported).second)
        {
            reportedPersonCount[reported] += 1;
        }
    }

    for (int i = 0; i < id_list.size(); ++i)
    {
        for (string s : reportPerson[id_list[i]])
        {
            if (reportedPersonCount[s] >= reportCount)
            {
                ++answer[i];
            }
        }
    }

    return answer;
}