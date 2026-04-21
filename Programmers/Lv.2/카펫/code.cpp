#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int vertical = -1;
    int horizon = -1;

    for (int i = 1; i < brown + yellow; ++i)
    {
        if ((brown + yellow) % i > 0)
        {
            continue;
        }

        cout << i << endl;

        if ((i - 2) * (((brown + yellow) / i) - 2) == yellow)
        {
            vertical = i;
            horizon = ((brown + yellow) / i);
            break;
        }
    }

    if (vertical > horizon)
    {
        answer.push_back(vertical);
        answer.push_back(horizon);
    }
    else
    {
        answer.push_back(horizon);
        answer.push_back(vertical);
    }

    return answer;
}