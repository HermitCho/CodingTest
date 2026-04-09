#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
	vector<int> answer;
	map<char, int> saveTerms;
	int maxDayOfMonth = 28;

	for (string s : terms)
	{
		saveTerms[s[0]] = stoi(s.substr(2));
	}

	for (int i = 0; i < privacies.size(); ++i)
	{
		char termsType = privacies[i][privacies[i].length() - 1];
		int YY = stoi(privacies[i].substr(0, 4));
		int MM = stoi(privacies[i].substr(5, 2));
		int DD = stoi(privacies[i].substr(8, 2));

		cout << "first : " << YY << ", " << MM << ", " << DD << endl;

		cout << "type : " << MM + saveTerms[termsType] << endl;

		int totalMonth = MM + saveTerms[termsType];
		YY += (totalMonth - 1) / 12;
		MM = (totalMonth - 1) % 12 + 1;
		if (DD < 2)
		{
			if (MM <= 1)
			{
				MM = 12;
				--YY;
			}
			else
			{
				--MM;
			}
			DD = 28;
		}
		else
		{
			--DD;
		}


		cout << "second : " << YY << ", " << MM << ", " << DD << endl;
		cout << "third : " << today.substr(0, 4) << ", " << today.substr(5, 2) << ", " << today.substr(8, 2) << endl << endl;

		int tYY = stoi(today.substr(0, 4));
		int tMM = stoi(today.substr(5, 2));
		int tDD = stoi(today.substr(8, 2));

		if (tYY > YY)
		{
			answer.push_back(i + 1);
		}
		else if (tYY == YY)
		{
			if (tMM > MM)
			{
				answer.push_back(i + 1);
			}
			else if (tMM == MM)
			{
				if (tDD > DD)
				{
					answer.push_back(i + 1);
				}
			}

		}
	}

	return answer;
}