# [PRO] Lv.2 - 피보나치 수
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '피보나치 수'](https://school.programmers.co.kr/learn/courses/30/lessons/12945) |
| **Notion** | [My Notion Note](https://www.notion.so/348ff16b753380aab4eeeb13530158b2) |

---

### 문제 요약
- 피보나치 수열을 이용하여 N번째 수에 1234567을 나눈 나머지를 구하라.

### 핵심 로직
1. **데이터 구조**: 단순 int형.
2. **로직**:
	- N이 2부터 시작하므로, answer = F(2)로 가정하고 시작.
	- prev 변수는 처음은 F(1)로 가정함.
	- for문으로 answer가 다음 수열로 넘어가는 형식으로 하여 값을 더해줌. 더한 후, 이전 값은 prev에게 넘겨주며 피보나치 수열의 형식을 유지함.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.