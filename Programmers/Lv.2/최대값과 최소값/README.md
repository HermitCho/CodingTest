# [PRO] Lv.2 - 최댓값과 최솟값
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '최댓값과 최솟값'](https://school.programmers.co.kr/learn/courses/30/lessons/12939) |
| **Notion** | [My Notion Note](https://www.notion.so/343ff16b753380fcba7dd9171a2b1bf7) |

---

### 문제 요약
- 주어진 string 배열에서 가장 큰 수와 가장 작은 수를 추출하는 문제이다.
- 숫자들은 띄어쓰기로 나누어져있다.

### 핵심 로직
1. **데이터 구조**: `stringstream` 을 이용한 string과 int형.
2. **로직**:
	- stringstream으로 배열을 나눈다.
	- stringstream으로 나눈 문자열들을 하나씩 가져와서 최댓값과 최솟값을 비교하며 갱신한다.
	- 마지막까지 비교했다면, answer에 최종 최댓값과 최솟값이 출력되도록 한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.