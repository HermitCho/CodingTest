#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string num;
    int max;
    int min;
    int checkCount = 0;

    while (ss >> num)
    {
        int stNum = stoi(num);

        if (checkCount == 0)
        {
            max = stNum;
            min = stNum;
            ++checkCount;
        }

        if (stNum >= max)
        {
            max = stNum;
        }

        if (stNum <= min)
        {
            min = stNum;
        }
    }

    answer = to_string(min) + " " + to_string(max);

    return answer;
}