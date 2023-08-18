#include <iostream>
#include <queue>
using namespace std;

int main() {
	int count = 0;
	int test_case;
	cin >> test_case;
	int n, m, ipt; // 문서의 개수, 궁금한 문서 위치, 중요도
	for (int i = 0; i < test_case; i++) {
		count = 0;
		cin >> n >> m;
		queue<pair<int, int>> q; // 인덱스, 중요도
		priority_queue<int> pq; // 우선순위 큐
		
		for (int j = 0; j < n; j++) {
			cin >> ipt;
			q.push({ j, ipt }); // 인덱스와 중요도 저장
			pq.push(ipt);
		}
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop(); // 첫번째 요소 제거
			if (pq.top() == value) { // 맨 앞 요소가 제일 클 경우
				pq.pop();
				count++;
				if (index == m) { // 찾고자 하는 인덱스와 같은지 확인
					cout << count << endl;
					break;
				}
			}
			else {
				q.push({ index, value }); // 아닐 경우 맨 뒤로 추가
			}
		}
	}
}