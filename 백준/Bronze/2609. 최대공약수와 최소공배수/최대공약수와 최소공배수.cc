#include <iostream>
using namespace std;

int x(int a, int b) { // 최대공약수
	int res=0;
	if (a > b) {
		for (int i = 1; i <= b; i++) {
			if (a % i == 0 && b % i == 0) res = i;
		}
	}
	else {
		for (int i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0) res = i;
		}
	}
	return res;
}

int y(int c, int d) { // 최소공배수
	int res;
	int tmp = x(c, d);
	return tmp * (c / tmp) * (d / tmp);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << x(a, b) << endl << y(a, b);
}