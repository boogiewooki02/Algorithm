#include <iostream>
using namespace std;

int main() {
	int arr[8] = { 0 };
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	int a = 0;
	int b = 0;
	for (int i = 0; i < 8; i++) {
		if (arr[i] == i+1) a++;
		if (arr[7 - i] == i + 1) b++;
	}
	if (a == 8) cout << "ascending";
	else if (b == 8) cout << "descending";
	else cout << "mixed";
}