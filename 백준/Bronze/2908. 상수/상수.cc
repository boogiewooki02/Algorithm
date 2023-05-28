#include <iostream>
using namespace std;

int reverseNum(int n) {
	int x, y, z;
	x = n / 100;
	y = (n % 100) / 10;
	z = n % 10;
	return 100 * z + y * 10 + x;
}

int main() {
	int a, b;
	cin >> a >> b;
	int sa, sb;
	sa = reverseNum(a);
	sb = reverseNum(b);
	
	if (sa < sb) cout << sb;
	else cout << sa;
}