#include <iostream>
#include <queue>
using namespace std;


int main() {
	int N;
	queue<int> q; // FIFO 이므로 큐 사용

	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);
	
	while (q.size() > 1) {
		q.pop(); // 맨 위 카드 제거
		q.push(q.front()); // 남은 카드중 맨 위 카드를 맨 밑으로 이동
		q.pop(); // 맨 뒤로 이동했기때문에 이제 제거
	}

	cout << q.front();
}