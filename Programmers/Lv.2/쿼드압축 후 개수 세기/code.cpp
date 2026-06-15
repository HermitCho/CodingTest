#include <vector>

using namespace std;

bool checkUniformity(int row, int col, int size, const vector<vector<int>>& arr)
{
    int firstValue = arr[row][col];
    for (int i = row; i < row + size; ++i)
    {
        for (int j = col; j < col + size; ++j)
        {
            if (arr[i][j] != firstValue) {
                return false;
            }
        }
    }
    return true;
}


void compress(int row, int col, int size, const vector<vector<int>>& arr, vector<int>& answer) {

    if (checkUniformity(row, col, size, arr))
    {
        answer[arr[row][col]]++;
        return;
    }

    int half = size / 2;

    compress(row, col, half, arr, answer);
    compress(row, col + half, half, arr, answer);
    compress(row + half, col, half, arr, answer);
    compress(row + half, col + half, half, arr, answer);
}

vector<int> solution(vector<vector<int>> arr)
{
    vector<int> answer(2, 0);

    int n = arr.size();

    compress(0, 0, n, arr, answer);

    return answer;
}