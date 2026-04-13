#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
	vector<int> answer;

	int maxY = park.size();
	int maxX = park[0].length();
	int curY, curX;

	for (int i = 0; i < maxY; ++i)
	{
		for (int j = 0; j < maxX; ++j)
		{
			if (park[i][j] == 'S') {
				curY = i;
				curX = j;
			}
		}
	}

	for (string route : routes)
	{
		char dir = route[0];
		int count = stoi(route.substr(2));

		int tempX = curX;
		int tempY = curY;
		bool isBlocked = false;

		for (int k = 0; k < count; ++k)
		{
			if (dir == 'E') tempX++;
			else if (dir == 'W') tempX--;
			else if (dir == 'S') tempY++;
			else if (dir == 'N') tempY--;

			if (tempX < 0 || tempY < 0 || tempX >= maxX || tempY >= maxY)
			{
				isBlocked = true;
				break;
			}

			if (park[tempY][tempX] == 'X')
			{
				isBlocked = true;
				break;
			}
		}

		if (!isBlocked)
		{
			curY = tempY;
			curX = tempX;
		}
	}

	answer.push_back(curY);
	answer.push_back(curX);

	return answer;
}