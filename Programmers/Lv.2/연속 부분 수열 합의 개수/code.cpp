#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer;
    set<int> distinctSums;
    int n = elements.size();

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;

        for (int len = 1; len <= n; ++len)
        {
            int currentIndex = (i + len - 1) % n;
            currentSum += elements[currentIndex];

            distinctSums.insert(currentSum);
        }
    }

    answer = distinctSums.size();
    return answer;
}