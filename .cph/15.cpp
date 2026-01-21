#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N + 1);
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        // dp[i][inv] = max profit till day i with inv watches
        vector<vector<long long>> dp(N + 1, vector<long long>(N + 1, -1));
        dp[0][0] = 0;

        for (int i = 1; i <= N; i++) {
            for (int inv = 0; inv <= i - 1; inv++) {
                if (dp[i - 1][inv] == -1) continue;

                // Gain one watch
                int curInv = inv + 1;

                // Sell 0, 1, or 2 watches
                for (int sell = 0; sell <= 2; sell++) {
                    if (sell <= curInv) {
                        int newInv = curInv - sell;
                        dp[i][newInv] = max(
                            dp[i][newInv],
                            dp[i - 1][inv] + sell * A[i]
                        );
                    }
                }
            }
        }

        long long ans = 0;
        for (int inv = 0; inv <= N; inv++) {
            ans = max(ans, dp[N][inv]);
        }

        cout << ans << "\n";
    }
    return 0;
}
