# [PRO] Lv.2 - 쿼드압축 후 개수 세기

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '쿼드압축 후 개수 세기'](https://school.programmers.co.kr/learn/courses/30/lessons/68936) |
| **Notion** | [My Notion Note](https://app.notion.com/p/380ff16b75338040b34efe9fa0fabea8) |

---

### 문제 요약
- 2n * 2n 형태의 이차원 배열이 있고, 배열 내 값은 1 아니면 0이다.
- 해당 배열을 정사각형의 유지되도록 가로, 세로를 나눠 4등분을 한다.
- 해당 영역에 모두 같은 값만 있다면 해당 정사각형 영역 값이 1이 된다(=압축).
- 계속 4등분하여 나눠지지 않을 때까지 반복한다.
- 모두 나눴을 때, 1과 0의 개수를 구하여라.

### 핵심 로직
1. **데이터 구조**: `vector<vector<int>>` 이차원 배열 이용.
2. **알고리즘**: 단순 분할 정복
2. **로직**:
	- 1과 0 개수를 저장하는 answer 벡터를 선언
	- arr에 대한 int row, col 를 선언.
	- compress 함수 정의(매개변수 row, col, 4등분 시, 한 행렬에서의 행/열 길이(=size), 전체 배열, 저장된 값)
	- checkUniformity() 함수를 정의(row, col, size(위와 동일), 전체 배열)
	- compress() 함수 내 checkUniformity()에서 해당 행렬 범위([[row ~ row+size], [col ~ col+size]])의 값들이 모두 같은 값인지 체크
		- checkUniformity()가 true 반환 시, 영역 내 값이 모두 같으므로, answer에 +1하고 해당 영역은 더이상 계산하지 않음.
		- checkUniformity()가 false 반환 시, 해당 영역에 대해 계속 4등분 진행을 위한 compress() 함수 재귀(인자는 4등분한 값을 넣어줌).
	- 마지막(4등분한 배열들이 하나의 값만 가질 때)까지 compress() 재귀 후, 나온 answer를 결과로 출력.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.