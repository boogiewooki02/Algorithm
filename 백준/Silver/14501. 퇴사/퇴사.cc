#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> schedule(n);
    for (int i = 0; i < n; i++) {
        int t, p;
        cin >> t >> p;
        schedule[i] = {t, p};  // (상담 기간, 수익)
    }

    // DP 테이블을 사용하여 최대 수익을 저장
    vector<int> dp(n + 1, 0);

    for (int i = 0; i < n; i++) {
        // 상담을 현재까지의 최대 수익과 비교하여 DP 테이블 업데이트
        if (i + schedule[i].first <= n) {  // 상담을 할 수 있는 경우
            dp[i + schedule[i].first] = max(dp[i + schedule[i].first], dp[i] + schedule[i].second);
        }
        // 상담을 하지 않고 그냥 다음날로 넘어가는 경우
        dp[i + 1] = max(dp[i + 1], dp[i]);
    }

    // DP 테이블에서 최대 수익 값을 찾음
    cout << dp[n] << endl;

    return 0;
}
