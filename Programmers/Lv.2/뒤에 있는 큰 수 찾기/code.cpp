#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<int> waitEles;

    for (int i = numbers.size() - 1; i >= 0; --i) {

        while (!waitEles.empty()
            && waitEles.top() <= numbers[i]) {
            waitEles.pop();
        }

        if (!waitEles.empty()) {
            answer[i] = waitEles.top();
        }

        waitEles.push(numbers[i]);
    }

    return answer;
}