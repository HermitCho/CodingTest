# [PRO] Lv.2 - 뒤에 있는 큰 수 찾기

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '뒤에 있는 큰 수 찾기'](https://school.programmers.co.kr/learn/courses/30/lessons/154539) |
| **Notion** | [My Notion Note](https://app.notion.com/p/36eff16b753380c7beb9f52648c42628) |

---

### 문제 요약
- 정수 배열이 주어진다.
- 해당 배열 내 각 원소 기준으로, 뒷 원소들 중 가장 자신과 가까운 큰 수를 구하여 자신의 위치에 담는 배열을 만들어라.

### 핵심 로직
1. **데이터 구조**: 'stack과 vector'
2. **로직**:
	- answer를 numbers와 크기가 같고, -1로 가득차도록 만든다.
	- numbers의 뒤부터 waitEles라는 스택에 집어 넣는다.
	- numbers의 요소 중 waitEles보다 작거나 같은 수 인지 확인한다.
		- numbers 요소 > waitEles.top이면, 뒷 원소가 더 작으므로 스택에서 빼버린다. 이런 식으로 스택이 비게 될 수도 있게된다.
		- numbers 요소 <= waitEles.top이면, 뒷 원소가 더 큰 수이므로, 문제의 조건에 성립하여 그냥 넘긴다.
	- 이제 waitEles에 수가 남아있다면, 해당 수를 answer에 넣는데, numbers 요소의 현재 위치와 같은 위치에 넣는다.
	- 마지막으로 waitEles.top에 현재 numbers 요소를 넣는다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.