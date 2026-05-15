# [PRO] Lv.2 - 프로세스
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '프로세스'](https://school.programmers.co.kr/learn/courses/30/lessons/42587) |
| **Notion** | [My Notion Note](https://www.notion.so/361ff16b75338067985fc57323deee9d) |

---

### 문제 요약
- 프로세스들의 우선 순위가 적힌 배열을 받는다.
- 배열에서 우선 순위가 가장 높은 프로세스부터 실행한다.
- location으로 주어진 위치의 프로세스가 몇 번째로 실행되는지 구하라.

### 핵심 로직
1. **데이터 구조**: ‘<queue<pair<int, int>>’와 ‘priority_queue<int>>’형.
2. **로직**:
	- 프로세스들의 기본 배열과 기존 위치를 받는 큐(readyQueue)와 우선 순위로 내림차순 되는 큐(pq)를 생성한다.
	- 두 큐에 기본 priorities 배열의 요소를 앞에서부터 push받는다.
	- 이제 while문을 통해 readyQueue가 빌 때까지, readyQueue의 배열이 pq의 앞과 같은지 비교하며 readyQueue를 push & pop해준다.
	- 같다면 순서(int sequence)를 +1 해주고, 현재 요소가 location 위치의 요소라면 그대로 answer에 값을 넣어주며 끝낸다. 아니라면 계속 while문을 반복한다.
	

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.