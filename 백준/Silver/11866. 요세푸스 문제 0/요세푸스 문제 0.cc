#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	queue<int> q;
	queue<int> result;
	for (int i = 1; i <= n; i++)
		q.push(i);
	
	while (q.size() >= 1) {
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		result.push(q.front());
		q.pop();
	}
	cout << "<";
	while(result.size() != 0) {
		if (result.size() == 1)
			cout << result.front();
		else 
			cout << result.front() << ", ";
		result.pop();
	}
	cout << ">";
}