#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n;
	for (int j = 0; j < n; j++) {
		int sum = 0;
		int tmp = 0;
		cin >> s; // 한줄 입력받음

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				tmp++;
			}
			else {
				tmp = 0;
			}
			sum += tmp;
		}
		cout << sum << endl;
	}
}