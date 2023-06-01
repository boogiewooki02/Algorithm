#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	while (s != "0") {
		int size = s.length();
		int tmp = 0;
		for (int i = 0; i < size; i++) {
			if (s[i] == s[size - i-1]) {
				tmp++;
			}
			else
				break;
		}
		if (tmp == size) cout << "yes" << endl;
		else cout << "no" << endl;

		cin >> s;
	}
}