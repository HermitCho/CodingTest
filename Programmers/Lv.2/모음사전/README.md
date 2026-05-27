# [PRO] Lv.2 - 모음사전

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '모음사전'](https://school.programmers.co.kr/learn/courses/30/lessons/84512) |
| **Notion** | [My Notion Note](https://www.notion.so/36dff16b753380ca8452e015a1273f04) |

---

### 문제 요약
- 사전에 알파벳 모음 'A', 'E', 'I', 'O', 'U'만을 사용하여 만들 수 있는, 길이 5 이하의 모든 단어가 수록되어 있음.
- 매개변수(word)로 주어진 단어가 사전에서 몇 번째 단어인지 계산하라.

### 핵심 로직
1. **알고리즘**: 백트래킹(Backtracking)
2. **로직**:
	- 전역 변수 vowels로 모음 종류를 저장, cnt로 번호 저장, isAnsChecked로 백트래킹 중단 조절.
	- 처음 checkWord는 아무것도 없는 ""에서 시작함.
	- 백트래킹 시작.
		- isAnsChecked가 false면 중단.
		- 현재 단어가 ""가 아니면 cnt 증가.
		- 현재 단어와 word가 같으면 중단.
		- 현재 단어가 5글자 이상이면 중단.
		- 여기까지 중단 점이 없으면, for문을 통해 각 현재 단어에 모음을 하나씩 넣어보며 백트래킹.
	- 백트래킹 완료 후, cnt를 결과로 출력.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.