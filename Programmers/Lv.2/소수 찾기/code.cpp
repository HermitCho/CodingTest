#include <string>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

bool checkPrime(int num)
{
    if (num <= 1) return false;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void dfs(string current, string numbers, vector<bool>& visited, unordered_set<int>& primes)
{
    if (!current.empty())
    {
        int num = stoi(current);
        if (checkPrime(num))
        {
            primes.insert(num);
        }
    }

    for (int i = 0; i < numbers.length(); i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            dfs(current + numbers[i], numbers, visited, primes);
            visited[i] = false;
        }
    }
}

int solution(string numbers)
{
    unordered_set<int> primes;
    vector<bool> visited(numbers.length(), false);

    dfs("", numbers, visited, primes);

    return primes.size();
}