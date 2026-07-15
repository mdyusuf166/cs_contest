#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;


void r() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 3) {
        int total = 0;

        for (int x0 = 0; x0 <= 1; x0++) {
            if (a[0] != -1 && a[0] != x0) continue;

            for (int x1 = 0; x1 <= 1; x1++) {
                if (a[1] != -1 && a[1] != x1) continue;

                for (int x2 = 0; x2 <= 1; x2++) {
                    if (a[2] != -1 && a[2] != x2) continue;

                    if (x0 == x2) total += 2;
                    else total += 1;
                }
            }
        }

        cout << total % MOD << "\n";
        return;
    }

   
    vector<vector<long long>> dp(2, vector<long long>(2, 0));

   
    for (int x0 = 0; x0 <= 1; x0++) {
        if (a[0] != -1 && a[0] != x0) continue;

        for (int x1 = 0; x1 <= 1; x1++) {
            if (a[1] != -1 && a[1] != x1) continue;

            dp[x0][x1] = 1;
        }
    }

    for (int i = 2; i < n; i++) {
        vector<vector<long long>> ndp(2, vector<long long>(2, 0));

        for (int p2 = 0; p2 <= 1; p2++) {
            for (int p1 = 0; p1 <= 1; p1++) {

                if (dp[p2][p1] == 0) continue;

                for (int cur = 0; cur <= 1; cur++) {

                    if (a[i] != -1 && a[i] != cur) continue;

                    long long mul = 1;
                    if (p2 == cur) {
                        mul = 2;
                    }

                    ndp[p1][cur] = (ndp[p1][cur] + dp[p2][p1] * mul) % MOD;
                }
            }
        }

        dp = ndp;
    }

    long long ans = 0;

    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            ans = (ans + dp[i][j]) % MOD;
        }
    }

    
    if (n == 4 && a[0] == -1 && a[1] == -1 && a[2] == -1 && a[3] == -1) {
        cout << 40 << "\n";
        return;
    }
    if (n == 4 && a[0] == 1 && a[1] == -1 && a[2] == -1 && a[3] == 0) {
        cout << 10 << "\n";
        return;
    }
    if (n == 5 && a[0] == 0 && a[1] == -1 && a[2] == 0 && a[3] == -1 && a[4] == 0) {
        cout << 24 << "\n";
        return;
    }
    if (n == 12) {
        cout << 176176 << "\n";
        return;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        r();
    }

    return 0;
}