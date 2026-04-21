# [PRO] Lv.2 - 카펫
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '카펫'](https://school.programmers.co.kr/learn/courses/30/lessons/42842) |
| **Notion** | [My Notion Note](https://www.notion.so/349ff16b7533805e87b1c251ec613786) |

---

### 문제 요약
- Leo는 카펫을 사러 갔다가, 갈색 사각형 안에 노란 사각형이 들어간 형태의 격자형 카펫을 봤었다.
- Leo는 격자로 나뉜 갈색과 노란색 사각형의 개수는 알지만, 전체 크기를 기억하진 못했다.
- 갈색 + 노란색 사각형의 개수로 전체 카펫의 크기가 N*M이었는지 구하라. (둘 다 N > M인 정수)

### 핵심 로직
1. **데이터 구조**: vector<int>를 반환하며 내부 로직은 단순 int형으로 계산.
2. **로직**:
	- brwon + yellow로 개수를 받는다.
	- brown + yellow = 카펫(사각형) 전체 크기임을 이용
	- yellow의 가로 + 2 = 전체 가로, yellow의 세로 + 2 = 전체 세로임을 이용하여 N, M을 계산.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.