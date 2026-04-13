#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> rating;
    unordered_map<int, string> rev_rating;
    
    for(int i = 0; i<players.size(); ++i)
    {
        rating[players[i]] = i+1;
        rev_rating[i+1] = players[i];
    }
    
    for(int j = 0; j<callings.size(); ++j)
    {
        int saveI = rating[callings[j]]; //추월자
        string saveS = rev_rating[saveI]; //추월자
        int saveI2 = rating[callings[j]]-1; //추월 당한 자
        string saveS2 = rev_rating[saveI2]; //추월 당한 자
        
        rev_rating[saveI] = saveS2;
        rev_rating[saveI2] = saveS;
                               
        --rating[saveS];
        ++rating[saveS2];
    }
    
    for(int k = 1; k<rev_rating.size()+1; ++k)
    {
        answer.push_back(rev_rating[k]);
    }
    
    return answer;
}

/*
//더 효율적인 AI 코드
//unordered_map을 하나만 사용했다.

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    // 1. 이름으로 인덱스를 즉시 찾기 위한 맵 초기화
    unordered_map<string, int> player_idx;
    for (int i = 0; i < players.size(); i++) {
        player_idx[players[i]] = i;
    }

    // 2. 호출된 이름에 따라 순위 교체
    for (const string& name : callings) {
        int current_idx = player_idx[name];
        int front_idx = current_idx - 1;

        // 추월당할 앞 선수 정보
        string front_name = players[front_idx];

        // A. players 배열 내 위치 교체 (Index -> Name 동기화)
        players[front_idx] = name;
        players[current_idx] = front_name;

        // B. 맵 내 인덱스 정보 갱신 (Name -> Index 동기화)
        player_idx[name] = front_idx;
        player_idx[front_name] = current_idx;
    }

    return players;
}
*/