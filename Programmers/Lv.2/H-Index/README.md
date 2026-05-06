# [PRO] Lv.2 - H-Index

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers 'H-Index'](https://school.programmers.co.kr/learn/courses/30/lessons/42747) |
| **Notion** | [My Notion Note](https://www.notion.so/H-Index-358ff16b75338012b54ad0b5b443b740) |

---

### 문제 요약
- H-Index는 과학자가 낸 n편의 논문 중, h번 이상 인용된 논문이 h편일 때, h의 최댓값을 나타내는 지표다.
- 한 과학자의 각 논문의 citations가 배열로 주어질 때, 해당 H-Index를 구하여라.

### 핵심 로직
1. **데이터 구조**: 'set' 사용.
2. **로직**:
	- 하나의 인덱스를 for문으로 기준 잡는다.
	- 그 수에서 (i + len -1) % n으로 연속된 인덱스에 있는 수열을 for문으로 계속 더해준다.
	- 더한 결과를 set에 넣어준다.
	- set 안에 들어간 전체 개수를 구한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.