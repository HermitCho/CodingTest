#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int left = 0;
    int right = 0;
    int sum = sequence[0];

    int min_len = 2000000;
    vector<int> answer(2, 0);

    while (right < sequence.size()) {

        if (sum == k) {

            if (right - left < min_len) {
                min_len = right - left;
                answer[0] = left;
                answer[1] = right;
            }
        }

        if (sum <= k) {
            right++;
            if (right < sequence.size()) {
                sum += sequence[right];
            }
        }

        else {
            sum -= sequence[left];
            left++;
        }
    }

    return answer;
}