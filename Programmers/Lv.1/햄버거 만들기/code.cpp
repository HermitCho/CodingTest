#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    stack<int> ing;

    for (int i = 0; i < ingredient.size(); ++i)
    {
        ing.push(ingredient[i]);

        if (ing.top() == 1)
        {
            ing.pop();
            if (!ing.empty() && ing.top() == 3)
            {
                ing.pop();
                if (!ing.empty() && ing.top() == 2)
                {
                    ing.pop();
                    if (!ing.empty() && ing.top() == 1)
                    {
                        ing.pop();
                        ++answer;
                    }
                    else
                    {
                        ing.push(2);
                        ing.push(3);
                        ing.push(1);
                    }
                }
                else
                {
                    ing.push(3);
                    ing.push(1);
                }
            }
            else
            {
                ing.push(1);
            }
        }
    }
    return answer;
}
