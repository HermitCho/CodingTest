# [PRO] Lv.2 - JadenCase 문자열 만들기
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers 'JadenCase 문자열 만들기'](https://school.programmers.co.kr/learn/courses/30/lessons/12951) |
| **Notion** | [My Notion Note](https://www.notion.so/329ff16b753380189dbed3b91b6af479?p=344ff16b7533804fbd93dc0fe1f759c4&showMoveTo=true) |

---

### 문제 요약
- 주어진 string을 띄어쓰기로 구분하여 첫번째 문자가 알파벳이면 대문자, 두 번째 문자부턴 소문자로 출력되도록 변경
- 숫자나 다른 문자열은 그대로 출력
- 띄어쓰기가 연속으로 여러 번 나올 수 있음.

### 핵심 로직
1. **데이터 구조**: `sting 및 bool` 을 이용.
2. **로직**:
	- wordStart로 첫번째 단어인지 확인(공백은 제외), 첫번째라면 wordStart를 false로 바꾸며 시작, 첫번째 단어가 소문자면 대문자로 변경.
	- 그 뒤 단어들은 대문자면 소문자로 변경
	- 띄어쓰기 발견 시, wordStart를 true로 변경.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.