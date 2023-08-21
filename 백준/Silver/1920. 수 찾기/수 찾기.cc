#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[100001];
int tmp;

void binary_search(int x) {

	int left = 0, mid = 0, right = n - 1;
	while (left <= right) {
		mid = (left + right) / 2;

		if (arr[mid] == x) { // x를 찾은 경우 1 출력 후 함수 종료
			cout << 1 << '\n';
			return;
		}
		else if (arr[mid] > x) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	// 이분 탐색이 끝날 때까지 x를 찾지 못했다면 0출력
	cout << 0 << '\n';
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 이분 탐색을 사용하기 위해 오름차순 정렬
	sort(arr, arr + n);

	cin >> m;
	int x;
	for (int i = 0; i < m; i++) {
		cin >> x;
		binary_search(x);
	}
}