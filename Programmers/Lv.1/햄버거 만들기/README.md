# [BOJ] 1260 - DFS와 BFS

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '햄버거 만들기'](https://school.programmers.co.kr/learn/courses/30/lessons/133502) |
| **Notion** | [My Notion Note](https://www.notion.so/33aff16b753380eea4eceee5a2e88861) |

---

### 문제 요약
- 햄버거를 만드는데, '빵 - 야채 - 고기 - 빵' 순서대로 밖에 못만듦.
- 빵, 야채, 고기 순서대로 1, 2, 3으로 입력받음.
- ingredient를 받아와서 햄버거를 얼마나 만들 수 있는지 세는 문제.

### 핵심 로직
1. **데이터 구조**: `stack<int>` 스택 사용
2. **탐색**:
   - **TOP**: 스택의 탑에서부터 1, 3, 2, 1 순서대로 있다면 추출 후, 결과에 +1

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.
