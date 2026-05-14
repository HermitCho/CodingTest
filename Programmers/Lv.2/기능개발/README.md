# [PRO] Lv.2 - 기능개발
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '기능개발'](https://school.programmers.co.kr/learn/courses/30/lessons/42586) |
| **Notion** | [My Notion Note](https://www.notion.so/360ff16b753380d49a4ece6e319f31df) |

---

### 문제 요약
- 개발하는 중인 기능들에 대해 진도율과 하루 개발량에 대해 배열이 주어진다.
- 뒤의 작업들은 앞의 작업이 모두 완료될 때 까지 배포될 수 없다.
- 하루당 배포되는 작업의 개수를 배열로 나타내어라.

### 핵심 로직
1. **데이터 구조**: `vector와 queue<int>` 이용.
2. **로직**:
	- progresses와 speeds를 이용하여 남은 개발 일 수를 구하고 모두 큐에 집어넣는다.
	- 큐 맨 앞의 일 수를 기준으로 하기 위해 pop한다.
	- 기준 일수보다 작은 일 수들을 포함하여 ++deployCount 한다.
	- deployCount를 answer에 집어넣기까지를 반복한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.