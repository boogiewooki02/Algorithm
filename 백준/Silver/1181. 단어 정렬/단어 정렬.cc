#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {

	int n;
	string tmp;
	vector<string> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), compare);

	cout << v[0] << endl;
	for (int i = 1; i < n; i++) {
		if (v[i - 1] == v[i]) 
			continue;
		cout << v[i] << endl;
	}
}