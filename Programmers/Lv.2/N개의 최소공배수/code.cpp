#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int tempN;
    while (b > 0)
    {
        tempN = a % b;
        a = b;
        b = tempN;
    }
    return a;
}

int lcm(int a, int b)
{
    if (a <= 0 && b <= 0) return 0;
    return (a / gcd(a, b)) * b;
}

int solution(vector<int> arr) {
    int answer = arr[0];

    for (int i = 1; i < arr.size(); ++i)
    {
        answer = lcm(answer, arr[i]);
    }

    return answer;
}