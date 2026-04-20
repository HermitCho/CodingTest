#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int prev = 1;

    for (int i = 2; i < n; ++i)
    {
        int tempN = answer;
        answer = (answer + prev) % 1234567;
        prev = tempN;
    }

    return answer;
}