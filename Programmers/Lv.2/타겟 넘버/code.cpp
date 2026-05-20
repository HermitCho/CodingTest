#include <string>
#include <vector>

using namespace std;

int backtracking(int target, int elementLoc, int numSum, vector<int>& numbers)
{
    if (elementLoc == numbers.size())
    {
        return (target == numSum) ? 1 : 0;
    }

    int plus_case = backtracking(target, elementLoc + 1, numSum + numbers[elementLoc], numbers);
    int minus_case = backtracking(target, elementLoc + 1, numSum - numbers[elementLoc], numbers);

    return plus_case + minus_case;
}

int solution(vector<int> numbers, int target)
{
    int answer = 0;

    answer = backtracking(target, 0, 0, numbers);

    return answer;
}