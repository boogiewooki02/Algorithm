#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int result=0;
	
	for (int i = 0; i < num; i++) {
		int sum = 0;
		int tmp = i;
		while (tmp) {
			sum += (tmp % 10);
			tmp /= 10;
		}
		if (i + sum == num) {
			result = i;
			break;
		}
	}
	cout << result;
}