# [PRO] Lv.2 - 롤케이크 자르기
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '롤케이크 자르기'](https://school.programmers.co.kr/learn/courses/30/lessons/132265) |
| **Notion** | [My Notion Note](https://app.notion.com/p/36fff16b753380d28708e3a83634b9b5) |

---

### 문제 요약
- 롤케이크에 서로 다른 토핑이 있다. 이 토핑을 숫자로 표현함.
- 주어진 롤케이크에서, 형과 동생이 같은 수의 토핑 종류를 가져가는 경우는 몇 가지인지 구하여라.

### 핵심 로직
1. **데이터 구조**: `map<int, int>` 이용.
2. **로직**:
	- 형과 동생의 map을 각각 생성.
	- 처음에 형의 map에 topping의 요소를 모두 복사.
	- topping의 요소 순서대로 형 map에서는 차감, 동생 map에는 추가.
	- 각 map의 size가 같을 때 answer++

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.