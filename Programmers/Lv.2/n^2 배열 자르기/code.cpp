#include <vector>
#include <algorithm> // max 함수 사용

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;

    // left부터 right까지 딱 그만큼만 반복
    for (long long i = left; i <= right; ++i) {
        long long row = i / n;
        long long col = i % n;

        // 규칙: max(row, col) + 1
        answer.push_back(max(row, col) + 1);
    }

    return answer;
}