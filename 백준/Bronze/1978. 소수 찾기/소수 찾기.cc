#include <iostream>
using namespace std;

int isPrime(int x) {
	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) cnt++;
	}
	if (cnt == 2) return 1;
	else return 0;
}

int main() {
	int n, x;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += isPrime(x);
	}
	cout << sum;
}