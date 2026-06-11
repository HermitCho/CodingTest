# [PRO] Lv.2 - 가장 큰 수

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '가장 큰 수'](https://school.programmers.co.kr/learn/courses/30/lessons/42746) |
| **Notion** | [My Notion Note](https://app.notion.com/p/1-37cff16b75338053bde6ec7716c8044e) |

---

### 문제 요약
- 숫자들이 들어있는 배열이 주어진다.
- 해당 숫자들을 이어붙여 만든 수 중에 가장 큰 수를 출력하라.

### 핵심 로직
1. **데이터 구조**: 단순 `string` 이용.
2. **로직**:
	- sort내에 람다식을 이용하여 배열을 to_string으로 바꿔 큰 숫자일 수록 앞에 오도록 정렬함.
	- 해당 배열을 앞에서부터 더함.
	- 모두 더한 문자열을 출력함.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.