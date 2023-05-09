#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	int tmp = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') tmp++;
	}
	if (str[0] == ' ') tmp--;
	if (str[str.length() - 1] == ' ') tmp--;
	cout << tmp + 1;
}