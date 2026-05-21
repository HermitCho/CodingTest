#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    long long curNum = 0;
    vector<long long> k_ary;

    vector<int> reverse_digits;

    while (n > 0)
    {
        reverse_digits.push_back(n % k);
        n = n / k;
    }

    reverse(reverse_digits.begin(), reverse_digits.end());

    for (int digit : reverse_digits) {
        if (digit == 0) {
            if (curNum > 0) {
                k_ary.push_back(curNum);
                curNum = 0;
            }
        }
        else {
            curNum = (curNum * 10) + digit;
        }
    }

    if (curNum > 0) {
        k_ary.push_back(curNum);
    }

    for (int i = 0; i < k_ary.size(); i++)
    {
        if (isPrime(k_ary[i])) ++answer;
    }

    return answer;
}