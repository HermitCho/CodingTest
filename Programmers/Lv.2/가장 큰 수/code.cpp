#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";


    sort(numbers.begin(), numbers.end(), [](int a, int b)
        {
            string string_a = to_string(a);
            string string_b = to_string(b);
            return string_a + string_b > string_b + string_a;
        });

    for (int i = 0; i < numbers.size(); i++)
    {
        answer += (to_string(numbers[i]));
    }

    if (answer[0] == '0')
    {
        answer = "0";
    }

    return answer;
}