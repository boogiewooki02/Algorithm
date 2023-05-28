#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	
	if (m - 45 >= 0) {
		m -= 45;
	}
	else {
		if (h - 1 >= 0) {
			m = 60 + (m - 45);
			h -= 1;
		}
		else {
			m = 60 + (m - 45);
			h = 23;
		}
	}

	cout << h << ' ' << m;
}