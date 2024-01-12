#include <iostream>
using namespace std;

int arr[1000000];
int d[1000000]; // 각 인덱스가 가질 최대 연속합

int main() {

	// 입력값 받기
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // 
	}

	// 문제풀이 시작
	int ans; // 최종 정답 담을 변수
	d[0] = arr[0];
	ans = d[0];
	for (int i = 1; i < n; i++) {
		d[i] = max(d[i - 1]+arr[i], arr[i]);
		if (d[i] > ans) ans = d[i];
	}
	cout << ans;
}