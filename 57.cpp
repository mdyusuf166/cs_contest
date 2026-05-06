#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 998244353;
const int mx = 3005;

ll ncr[mx][mx];
ll pw[mx][mx];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < mx; i++) {
        ncr[i][0] = ncr[i][i] = 1;

        for (int j = 1; j < i; j++) {
            ncr[i][j] = (ncr[i - 1][j - 1] + ncr[i - 1][j]) % mod;
        }
    }

    for (int i = 0; i < mx; i++) {
        pw[i][0] = 1;

        for (int j = 1; j < mx; j++) {
            pw[i][j] = (pw[i][j - 1] * i) % mod;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> good(n + 1);

        for (int len = 0; len <= n; len++) {
            ll ans = 0;

            for (int i = 1; i <= m; i++) {
                ll now = (ncr[m][i] * pw[n - i][len]) % mod;

                if (i % 2 == 1)
                    ans = (ans + now) % mod;
                else
                    ans = (ans - now + mod) % mod;
            }

            good[len] = ans;
        }

        vector<ll> dp(n + 1);
        dp[0] = 1;

        for (int len = 1; len <= n; len++) {
            dp[len] = good[len];

            for (int cut = 0; cut < len; cut++) {
                dp[len] = (dp[len] + good[cut] * dp[len - cut - 1]) % mod;
            }
        }

        cout << dp[n] << '\n';
    }

    return 0;
}