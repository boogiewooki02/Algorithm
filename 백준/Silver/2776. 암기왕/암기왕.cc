#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector<int>& arr, int len, int target) {
    int low = 0, high = len - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        //원하는 값을 찾았다면 true 반환
        if (target == arr[mid])	return true;

        // 원하는 값이 더 작다면 검사 범위를 더 낮게 잡아야 한다.
        if (target < arr[mid]) {
            high = mid - 1;
        }
        // 원하는 값이 더 크다면 검사 범위를 더 크게 잡아야 한다.
        else if (target > arr[mid]) {
            low = mid + 1;
        }
    }
    return false; // 마지막까지 못찾는다면 false 반환
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v1;
    vector<int> v2;
    int t, N, M, tmp;
    cin >> t;

    // 테스트케이스 번 만큼
    for (int i = 0; i < t; i++) {
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> tmp;
            v1.push_back(tmp);
        }
        cin >> M;
        for (int j = 0; j < M; j++) {
            cin >> tmp;
            v2.push_back(tmp);
        } // 예제 입력 완료

        sort(v1.begin(), v1.end());
        for (int j = 0; j < M; j++) {
            int target = v2[j];
            if (binary_search(v1, N, target)) {
                cout << "1\n";
            }
            else cout << "0\n";
        }
        v1.clear();
        v2.clear();
    }
}