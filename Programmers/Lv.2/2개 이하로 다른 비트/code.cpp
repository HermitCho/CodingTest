#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    answer.reserve(numbers.size());

    for (long long x : numbers) {
        if (x % 2 == 0)
        {
            answer.push_back(x + 1);
        }
        else
        {
            long long lowest_zero = (x + 1) & -(x + 1);
            answer.push_back(x + (lowest_zero >> 1));
        }
    }

    return answer;
}