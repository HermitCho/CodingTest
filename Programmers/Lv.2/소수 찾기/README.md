# [PRO] Lv.2 - 소수 찾기

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '소수 찾기'](https://school.programmers.co.kr/learn/courses/30/lessons/42839) |
| **Notion** | [My Notion Note](https://app.notion.com/p/37dff16b7533800bb157e349538e4e91) |

---

### 문제 요약
- 0~9까지 숫자가 무작위로 나열된 문자열이 주어진다.
- 해당 문자열의 숫자들을 이용하여 만들 수 있는 모든 소수의 개수를 구하라.

### 핵심 로직
1. **데이터 구조**: `unordered_set_<int>, vector<bool>` 이용.
2. **알고리즘**: 백트래킹(Backtracking)
2. **로직**:
	- 만든 소수를 저장할 primes 셋과 방문을 체크할 visited를 생성.
	- dfs함수를 호출하여 백트래킹 알고리즘 형식으로 문자열을 하나씩 사용한다.
	- 문자열을 붙일 때마다, checkPrime 함수를 이용하여 소수인지 판별한다.
	- 소수면 primes에 삽입한다.
	- dfs를 모두 돌면, primes의 크기를 결과로 출력한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.