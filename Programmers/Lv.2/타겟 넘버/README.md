# [PRO] Lv.2 - 타겟 넘버
| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '타겟 넘버'](https://school.programmers.co.kr/learn/courses/30/lessons/43165) |
| **Notion** | [My Notion Note](https://www.notion.so/366ff16b7533807a9212ed92a51727ce) |

---

### 문제 요약
- 순서가 고정된 숫자 배열과 타겟 숫자가 있다.
- 해당 배열에 '+/-'를 취하여 결과 값으로 타겟 숫자가 나오도록 하는 경우의 수의 총합을 구하여라.

### 핵심 로직
1. **데이터 구조**: 'vector<int>’형.
2. **알고리즘**: 백트래킹(Backtraacking)
2. **로직**:
	- 백트래킹 함수를 구현한다.
		- 매개변수는 만들어야하는 숫자 target, 현재 배열 내 요소 위치 elememtLoc, 현재 총합 numSum, 배열 numbers.
		- elementLoc가 배열의 끝, 즉 numbers.size()인지 확인한다.
			- 맞다면 target과 numSum이 같은지 확인한다.
				- 이것도 맞다면 해당 경우의 수는 적절한 경우의 수기 때문에 1을 반환한다.
				- 틀리다면 해당 경우의 수를 카운트하면 안되므로, 0을 반환한다.
			- 틀리다면 element+1 올려주고, 다음 요소를 각 '+/-'해주는 백트래킹 함수를 각각 재귀 호출한다.
	- 백트래킹 함수의 결과를 answer에 더한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.