# [PRO] Lv.1 - 신고 결과 받기

| 분류 | 링크 |
| :--- | :--- |
| **문제 주소** | [Programmers '신고 결과 받기'](https://school.programmers.co.kr/learn/courses/30/lessons/92334) |
| **Notion** | [My Notion Note](https://www.notion.so/342ff16b7533809e8bc5ee062fbc8215) |

---

### 문제 요약
- 신고자가 신고 대상 정지에 대한 메일을 수신 받는 알고리즘에 대한 문제이다.
- 신고자는 서로 다른 1인에 대해 최대 1회 신고가 가능하다.
- 신고 대상은 여러 신고자에게 신고를 받아서 신고 횟수가 누적 reportCount 이상이 되면 정지가 된다.
- 이 때, 신고자들은 해당 신고 대상의 정지 소식을 메일로 수신 받는데, 해당 수신 메일을 몇 번 받는지가 총 출력이다.

### 핵심 로직
1. **데이터 구조**: `unordered_map` 다중 사용
2. **알고리즘**:
   - unordered_map인 reportPerson은 신고자-신고 대상(중복x)을 저장, reportedPersonCount은 유저-자신이 받은 신고 횟수를 저장한다.
	- reports는 띄어쓰기로 구분되니, stringstream을 이용하여 구분해준다.
	- 결과인 answer는 id_list에 따라 출력 순서가 정해지므로, id_list에 관한 for문을 통해 수신받는 메일 횟수를 체크한다.

### 소스 코드
- 본 코드는 동일 폴더 내의 파일에서 확인하실 수 있습니다.
