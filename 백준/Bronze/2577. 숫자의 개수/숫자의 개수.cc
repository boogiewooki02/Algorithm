#include <iostream>
using namespace std;

int main() {
	int A, B, C, result;
	cin >> A >> B >> C;
	result = A * B * C;
	int tmp = 0;
	int arr[10] = { 0, }; // 10개의 원소 0으로 초기화

	while (result != 0) {
		tmp = result % 10;
		for (int i = 0; i < 10; i++) {
			if (tmp == i) arr[i]++;
		}
		result /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}