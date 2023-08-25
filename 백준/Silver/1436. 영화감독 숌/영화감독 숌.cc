#include <iostream>
using namespace std;

int main() {
	int n, cnt, ans, tmp;
	cin >> n;

	ans = 0;
	cnt = 0;
	while (cnt != n) {

		ans++;
		tmp = ans;

		while (tmp != 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else {
				tmp /= 10; // 일의 자리수 삭제
			}
		}
	}
	
	cout << ans;
}