#include <string>
#include <vector>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    long long sum1 = 0;
    long long sum2 = 0;

    for (int num : queue1) sum1 += num;
    for (int num : queue2) sum2 += num;

    long long totalSum = sum1 + sum2;

    if (totalSum % 2 != 0) {
        return -1;
    }

    long long target = totalSum / 2;
    int n = queue1.size();

    vector<int> q;
    q.reserve(n * 2);
    for (int num : queue1) q.push_back(num);
    for (int num : queue2) q.push_back(num);

    int p1 = 0;
    int p2 = n;
    int answer = 0;

    int max_ops = n * 4;

    while (answer <= max_ops) {
        if (sum1 == target) {
            return answer;
        }

        if (sum1 > target) {
            sum1 -= q[p1 % (2 * n)];
            p1++;
        }
        else {
            sum1 += q[p2 % (2 * n)];
            p2++;
        }

        answer++;
    }

    return -1;
}