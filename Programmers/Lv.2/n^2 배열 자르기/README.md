# [PRO] Lv.2 - n^2 배열 자르기

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers 'n^2 배열 자르기'](https://school.programmers.co.kr/learn/courses/30/lessons/87390) |
| **Notion** | [My Notion Note](https://www.notion.so/1-35aff16b753380ad9321e6514b2c27ca) |

---

### 문제 요약
- 1행 1열부터 i행 i열까지의 영역 내의 모든 빈 칸을 숫자 i로 채운  2차원 배열이 있다.
- 해당 2차원 배열을 1차원 배열로 바꾼다.
- 주어진 left, right를 통해 arr[left] ~ arr[right]까지 수를 순서대로 모두 출력하라.

### 핵심 로직
1. **로직**:
	- for문으로 left부터 row까지 모든 수를 나눠서 몫과 나머지를 각각 row와 col로 나타낸다.
	- row와 col을 비교하여 각 요소에 들어갈 수를 구한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.