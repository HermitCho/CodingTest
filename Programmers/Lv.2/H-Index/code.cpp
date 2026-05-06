#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int cSize = citations.size();

    for (int i = cSize; i > 1; --i)
    {
        int hCount = 0;

        for (int j = 0; j < cSize; ++j)
        {
            if (citations[j] >= i)
            {
                ++hCount;
            }
        }

        if (hCount >= i)
        {
            answer = i;
            break;
        }

        hCount = 0;
    }

    return answer;
}