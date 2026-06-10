# [PRO] Lv.2 - 다리를 지나는 트럭

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '다리를 지나는 트럭'](https://school.programmers.co.kr/learn/courses/30/lessons/42583) |
| **Notion** | [My Notion Note](https://app.notion.com/p/37bff16b753380f487a2d2985506e0ae) |

---

### 문제 요약
- 다리와 이 다리를 건너려는 트럭들이 있다.
- 다리는 최대 하중과 다리의 길이가 존재한다.
- 트럭들의 총합이 최대 하중보다 높게 올라갈 수 없고, 트럭의 수가 다리의 길이보다 많이 올라갈 수 없다.
- 모든 트럭이 다리를 건너는 시간을 구하여라.

### 핵심 로직
1. **데이터 구조**: 단순 `queue<vector<int>>` 이용.
2. **알고리즘**: DP 응용
3. **로직**:
	- curBridgeWeight = 현재 다리 하중, answer = 타이머, curTruckEle = 현재 truck_weights 요소, remainTruck = 남은 트럭 수
	- 다리를 queue로 구현한다.
	- 한 사이클마다 answer++
		- 먼저 queue를 확인하여, queue에 있는 트럭 중 다리를 건널 수 있는 트럭을 먼저 보낸다.
		- 그 후 다음으로 건널 트럭을 truck_weights[curTruckEle]로 지정한다.
		- 다리 하중을 고려하여 다음 트럭을 보낸다.
		- 현재 다리 하중을 늘리고, 다음 트럭 요소도 +1로 바꾸며, 남은 트럭 수도 -1한다.
	- 남은 트럭 수가 없으면 해당 로직을 끝내며 answer를 출력한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.