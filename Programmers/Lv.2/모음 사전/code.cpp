#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char vowels[] = { 'A', 'E', 'I', 'O', 'U' };
int cnt;
bool isAnsChecked;

void checkWord(string current_word, string target_word)
{
    if (isAnsChecked) { return; }

    if (current_word != "") { cnt++; }

    if (current_word == target_word)
    {
        isAnsChecked = true;
        return;
    }

    if (current_word.length() >= 5) { return; }

    for (int i = 0; i < 5; i++)
    {
        checkWord(current_word + vowels[i], target_word);
    }
}

int solution(string word) {
    int answer = 0;
    cnt = 0;
    isAnsChecked = false;

    checkWord("", word);
    answer = cnt;

    return answer;
}