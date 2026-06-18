#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; ++i) {
        triangle[i].resize(i + 1);
    }

    int row = -1;
    int col = 0;
    int num = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (i % 3 == 0) {
                row++;
            }
            else if (i % 3 == 1) {
                col++;
            }
            else if (i % 3 == 2) {
                row--;
                col--;
            }

            triangle[row][col] = num++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            answer.push_back(triangle[i][j]);
        }
    }

    return answer;
}