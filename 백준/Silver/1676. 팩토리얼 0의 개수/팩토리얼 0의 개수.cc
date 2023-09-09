#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt_2 = 0;
	int cnt_5 = 0;
	int tmp;
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp % 2 == 0) {
			cnt_2++;
			tmp /= 2;
		}
		while (tmp % 5 == 0) {
			cnt_5++;
			tmp /= 5;
		}
	}
	cout << min(cnt_2, cnt_5);
}