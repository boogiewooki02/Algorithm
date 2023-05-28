#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int arr[26] = { 0, };
	char ans;
	int max = -1;

	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a') arr[s[i] - 'a']++;
		else arr[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			ans = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			ans = 'A' + i; // 정답의 인덱스를 저장
		}
	}
	cout << ans;
}