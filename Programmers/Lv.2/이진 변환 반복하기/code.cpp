#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = { 0, 0 };

    while (s != "1")
    {
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0')
            {
                ++answer[1];
            }
        }
        s.erase(remove(s.begin(), s.end(), '0'), s.end());

        int sLength = s.length();
        string tmp;

        while (sLength > 0)
        {
            tmp += to_string(sLength % 2);
            sLength /= 2;
        }

        s = "";

        for (int i = tmp.length() - 1; i >= 0; --i)
        {
            s += tmp[i];
        }

        ++answer[0];
    }


    return answer;
}