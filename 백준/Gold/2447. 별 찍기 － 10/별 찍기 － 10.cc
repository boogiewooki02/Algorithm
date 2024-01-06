#include <iostream>
using namespace std;

void star(int i, int j, int n) {
	if ((i/n) % 3 == 1 && (j/n) % 3 == 1) {
		cout << " ";
	}
	else if (n / 3 == 0) {
		cout << "*";
	}
	else {
		star(i, j, n / 3);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { // i는 행
		for (int j = 0; j < n; j++) { // j는 열
			star(i, j, n);
		}
		cout << '\n';
	}
}