#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
	vector<int> answer;
	int lux = -1, luy = -1, rdx = -1, rdy = -1;

	for (int i = 0; i < wallpaper.size(); ++i)
	{
		for (int j = 0; j < wallpaper[i].length(); ++j)
		{
			if (wallpaper[i][j] == '#')
			{
				if (lux < 0 || lux > i)
				{
					lux = i;
				}

				if (luy < 0 || luy > j)
				{
					luy = j;
				}

				if (rdx < 0 || rdx < i + 1)
				{
					rdx = i + 1;
				}

				if (rdy < 0 || rdy < j + 1)
				{
					rdy = j + 1;
				}
			}
		}
	}

	answer.push_back(lux);
	answer.push_back(luy);
	answer.push_back(rdx);
	answer.push_back(rdy);
	return answer;
}