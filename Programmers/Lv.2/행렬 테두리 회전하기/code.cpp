#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    vector<vector<int>> array(rows, vector<int>(columns));

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            array[r][c] = r * columns + (c + 1);
        }
    }



    for (int i = 0; i < queries.size(); i++)
    {
        int realX1 = queries[i][0] - 1;
        int realY1 = queries[i][1] - 1;
        int realX2 = queries[i][2] - 1;
        int realY2 = queries[i][3] - 1;

        int saveCorner = array[realX1][realY2];
        int min_val = saveCorner;

        //윗줄
        for (int c = realY2; c > realY1; c--)
        {
            array[realX1][c] = array[realX1][c - 1];
            min_val = min(min_val, array[realX1][c]);
        }

        //왼쪽 줄
        for (int r = realX1; r < realX2; r++)
        {
            array[r][realY1] = array[r + 1][realY1];
            min_val = min(min_val, array[r][realY1]);
        }

        //아랫줄 
        for (int c = realY1; c < realY2; c++)
        {
            array[realX2][c] = array[realX2][c + 1];
            min_val = min(min_val, array[realX2][c]);
        }

        //오른쪽 줄
        for (int r = realX2; r > realX1; r--)
        {
            array[r][realY2] = array[r - 1][realY2];
            min_val = min(min_val, array[r][realY2]);
        }

        array[realX1 + 1][realY2] = saveCorner;

        answer.push_back(min_val);
    }

    return answer;
}