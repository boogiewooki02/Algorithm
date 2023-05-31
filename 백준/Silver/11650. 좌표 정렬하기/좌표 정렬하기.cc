#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(2, 0)); // n개의 행, 2개의 열을 갖는 2차원 벡터를 생성후 각 원소 0으로 초기화
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << " " << arr[i][1] << '\n';
	}
}
