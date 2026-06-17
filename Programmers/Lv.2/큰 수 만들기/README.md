# [PRO] Lv.2 - 큰 수 만들기

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '큰 수 만들기'](https://school.programmers.co.kr/learn/courses/30/lessons/42883) |
| **Notion** | [My Notion Note](https://app.notion.com/p/382ff16b753380d2815eecda696ee004) |

---

### 문제 요약
- string으로 구성된 숫자열이 있다.
- 해당 숫자열의 배치 순서를 고려하여 k개의 수를 뺏을 때, 가장 큰 수를 구하여라.

### 핵심 로직
1. **데이터 구조**: 단순 'string' 이용.
2. **로직**:
	- number의 char들을 for문을 통해 앞에서부터 하나씩 가져온다.
	- 가져온 char을 조건문에 넣어본다.
		- 현재 answer의 맨 마지막 값보다 크면 answer의 마지막 값을 빼고 k--, 그리고 해당 값을 answer의 마지막 값으로 넣는다.
		- 작다면, 그대로 넣는다.
	- for문이 끝나고, while문으로 k>0보다 크다면 남은 answer의 맨 뒷값을 남은 k만큼 차례대로 없앤다.
	- answer를 출력한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.