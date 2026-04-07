#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
	string answer = "";
	map<char, int> perType = { {'R', 0}, {'T', 0}, {'C', 0}, {'F', 0}, {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0} };

	for (int i = 0; i < survey.size(); ++i)
	{
		if (choices[i] >= 5)
		{
			perType[survey[i][1]] += choices[i] - 4;
			cout << survey[i][1];
		}
		else if (choices[i] <= 3)
		{
			perType[survey[i][0]] += 4 - choices[i];
			cout << survey[i][0];
		}
	}

	answer += (perType['R'] >= perType['T']) ? "R" : "T";
	answer += (perType['C'] >= perType['F']) ? "C" : "F";
	answer += (perType['J'] >= perType['M']) ? "J" : "M";
	answer += (perType['A'] >= perType['N']) ? "A" : "N";

	return answer;
}