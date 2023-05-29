#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnt = 1;
	int sum = 1;
	while (sum < n) {
		sum += cnt * 6;
		cnt++;
	}
	cout << cnt;
}