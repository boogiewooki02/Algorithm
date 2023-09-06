#include <iostream>
using namespace std;

int main() {
	int n, ans;
	cin >> n;
	
	ans = 0;
	while (n >= 0) {
		if (n % 5 == 0) {
			ans += (n / 5);
			cout << ans;
			return 0;
		}

		n -= 3;
		ans++;
	}
	//while문에서 찾지 못했을 경우
	cout << -1;
}