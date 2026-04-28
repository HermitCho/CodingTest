# [PRO] Lv.2 - 괄호 회전하기
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '괄호 회전하기'](https://school.programmers.co.kr/learn/courses/30/lessons/76502) |
| **Notion** | [My Notion Note](https://www.notion.so/350ff16b75338032b7eac1a29841c91f) |

---

### 문제 요약
- 괄호 '()', '{}', '[]'가 있는 문자열 s가 주어진다.
- s를 왼쪽으로 한번씩 옮기면서, 괄호가 제대로 열고 닫히는 가짓수를 출력하라.

### 핵심 로직
1. **데이터 구조**: 'stack'및 'vector' 사용.
2. **로직**:
	- isValid() 함수로 괄호 뒤가 먼저 오는 경우는 false
	- 괄호 앞이 이미 있는 경우, 같은 모양의 괄호 뒤가 들어오는지 체크 후, 아니라면 false
	- 정확히 괄호 앞, 뒤 짝이 맞는 경우만 true
	- isValid()가 true를 반환하면, ++answer

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.