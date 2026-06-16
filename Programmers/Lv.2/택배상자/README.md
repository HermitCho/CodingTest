# [PRO] Lv.2 - 택배상자

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '택배상자'](https://school.programmers.co.kr/learn/courses/30/lessons/131704) |
| **Notion** | [My Notion Note](https://app.notion.com/p/381ff16b75338019bc0ccab2bc682ce8) |

---

### 문제 요약
- order의 번호 순서대로 기존 컨테이너 벨트에서 트럭에 택배를 실어야한다.
	- 기존 컨테이너 벨트에서 온 순서대로 1, 2, 3...
- 기존 컨테이너 벨트에서는 맨 앞에 도착한 택배밖에 꺼내지 못한다.
- 트럭에 바로 넣지 못하는 택배는 보조 컨테이너 벨트에 둘 수 있다. 보조 컨테이너 벨트는 가장 나중에 넣은 택배부터 꺼낼 수 있다.
	- 보조 컨테이너 벨트에 1, 2, 5로 넣으면, 5, 2, 1 순서대로 먼저 꺼낼 수 있다.
- 위의 규칙에 따라 트럭에 order의 순서대로 넣으려고 할 때, 최대 넣을 수 있는 택배의 개수를 구하여라.

### 핵심 로직
1. **데이터 구조**: `queue<int>, stack<int>` 이용.
2. **로직**:
	- 기존 컨테이너 벨트는 mainLine, 보조는 subLine으로 구현.
	- mainLine에 순서대로 정수를 order.size()만큼 넣는다.
	- 다음으로 order.size()에 따른 for문을 구성한다.
		- subLine.top에 order[i]가 있으면 제거 후 answer++;
		- mainLine.front 체크
			- front가 order[i]면 빼면서 answer++;	
			- front가 order[i]가 아니면, subLine으로 front를 이동하며 계속 다음 front를 비교.
	- for문이 끝나면 answer를 출력.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.