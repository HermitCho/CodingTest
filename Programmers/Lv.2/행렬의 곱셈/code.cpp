#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int a = arr1.size();
    int b = arr2[0].size();
    vector<vector<int>> answer(a, vector<int>(b, 0));

    for (int i = 0; i < arr1.size(); ++i)
    {
        int mult = 0;
        for (int j = 0; j < arr1[i].size(); ++j)
        {
            for (int k = 0; k < arr2[j].size(); ++k)
            {
                mult = arr1[i][j] * arr2[j][k];
                answer[i][k] += mult;
            }
        }
    }
    return answer;
}