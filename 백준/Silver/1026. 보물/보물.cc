#include <iostream>
#include <algorithm>
using namespace std;

int a[51], b[51];

bool compare(int x, int y) {
	return x > y;
}

int main() {
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	sort(a, a + n, compare); // a는 내림차순으로
	sort(b, b + n); //b는 오름차순으로
	
	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];
	cout << ans;
}