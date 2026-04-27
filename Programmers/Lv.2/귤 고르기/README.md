# [PRO] Lv.2 - 멀리 뛰기
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '귤 고르기'](https://school.programmers.co.kr/learn/courses/30/lessons/138476) |
| **Notion** | [My Notion Note](https://www.notion.so/34fff16b753380f4af55eca9c8a70015) |

---

### 문제 요약
- 과수원에서 수확한 다양한 크기의 귤이 있다.
- 귤을 k개 팔기 위한 최소한의 종류 수를 구하여라.

### 핵심 로직
1. **데이터 구조**: `unordered_map과 이를 복사할 vector<pair>` 이용.
2. **로직**:
	- vector<int> tangerine의 데이터를 unordered_map<int, int>에 받는다.
	- 해당 데이터를 vector<pair<int, int>>에 복사한다.
	- 위 벡터를 람다 식을 통해 value의 내림차순으로 정렬한다.
	- 벡터 맨 앞 요소의 개수부터 k 이상이 될 때까지 귤 종류를 더한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.