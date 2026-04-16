#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string word;
    bool wordStart = true;

    for (int i = 0; i < s.length(); ++i)
    {
        if (wordStart && s[i] != ' ')
        {
            wordStart = false;
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                answer += s[i] - ('a' - 'A');
            }
            else
            {
                answer += s[i];
            }
        }
        else if (s[i] == ' ')
        {
            wordStart = true;
            answer += s[i];
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                answer += s[i] + ('a' - 'A');
            }
            else
            {
                answer += s[i];
            }
        }
    }

    return answer;
}